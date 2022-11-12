# P1
## sdkconfig
This is the configuration file for the project being developed. It contains the project's specific parameters and definitions that will be used in building and deploying the project onto a hardware system. Changing a parameter can have serious implications on performance, as an incorrect specification can mean that the project is no longer defined for the specific hardware being used for the project and can introduce performance impairments or prevent normal operation altogether.

## sdkconfig.h
This is the header file generated upon building the project. It is based on the definitions outlined in the sdkconfig file and reflects the specifications to the project being created. Any changes to this file would result in similar effects as the regular config file before, however, there can be other implications since the project has already been built prior to any changes.

## FreeRTOSConfig.
This config file set parameters pertaining to the RTOS kernel. It tailors the kernel to the specific application being built, allowing for functionality and features to be removed or added as needed to produce outputs or improve performance. It also contains some operating parameters that determine the key characteristics of the kernel's operation such as clock, tick rates and more. A change to the definitions in this file can have serious implications on the project as it can change the behaviour of some aspects of the project or remove certain functionality that was crucial for operation.

# P2
configUSE_TRACE_FACILITY
configGENERATE_RUN_TIME_STATS
portCONFIGURE_TIMER_FOR_RUN_TIME_STATS()
portGET_RUN_TIME_COUNTER_VALUE()

# Branching
In order to produce the adaptations for each question, a new branch was created to house the respective revision for the scenario presented. These are appropriately labeled for the specific question.