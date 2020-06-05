#define MQTT_CUSTOMER "viktak"
#define MQTT_PROJECT  "spiti"

#define HARDWARE_ID "ESP-01"
#define HARDWARE_VERSION "1.0"
#define SOFTWARE_ID "Big relay"
#define FIRMWARE_VERSION "1.1"

#define JSON_SETTINGS_SIZE (JSON_OBJECT_SIZE(10) + 200)
#define JSON_MQTT_COMMAND_SIZE 300

#define DEFAULT_HEARTBEAT_INTERVAL 300

#define CONNECTION_STATUS_LED_GPIO 0

#define RELAY_BOARD_ADDRESS 0x26
#define SDA_GPIO 13
#define SCL_GPIO 14