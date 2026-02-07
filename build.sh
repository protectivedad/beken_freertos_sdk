SOC=$1
VERSION=$2

if [[ $(uname) == "CYGWIN"* ]]; then
	export OTA_TOOL="./tools/rtt_ota/rt_ota_packaging_tool_cli.exe"
	export FREERTOS_EXEC_PATH="/opt/gcc-arm-none-eabi-10.3-2021.10/bin/"
else
	export OTA_TOOL="./tools/rtt_ota/rt_ota_packaging_tool_cli"
fi

[ -z $SOC ] && SOC=bk7238
[ -z $VERSION ] && VERSION=1.0.0

make $SOC -j $(nproc) USER_SW_VER=$VERSION

$OTA_TOOL -f ./out/bsp.bin -o ./out/app.rbl -p app -c gzip -s aes -k 0123456789ABCDEF0123456789ABCDEF -i 0123456789ABCDEF -v $VERSION
