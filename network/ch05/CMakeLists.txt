add_executable(tcpClient tcpClient.c)
target_link_libraries(tcpClient yolanda)

add_executable(tcpServer tcpServer.c)
target_link_libraries(tcpServer yolanda)

