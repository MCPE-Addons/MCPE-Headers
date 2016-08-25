#pragma once

#include <string>

class ExternalServer {
    public:
        char filler[8];
        int id;
        int port;
        int protocol;
        int players;
        int maxPlayers;
        std::string name;
        std::string title;
        std::string version;
        std::string address;

        ExternalServer(ExternalServer const&);
        ExternalServer(int, std::string const&, std::string const&, int);
        ExternalServer();
        ~ExternalServer();
        const std::string& getAddress() const;
        const std::string& getIP() const;
        int getId() const;
        int getMaxPlayers() const;
        const std::string& getName() const;
        int getPlayers() const;
        int getPort() const;
        int getProtocol() const;
        const std::string& getTitle() const;
        const std::string& getVersion() const;
        void resolve();
        void setAddress(std::string const&);
        void setMaxPlayers(int);
        void setName(std::string const&);
        void setPlayers(int);
        void setPort(int);
        void setProtocol(int);
        void setTitle(std::string const&);
        void setVersion(std::string const&);

        static bool isValidIp(std::string const&);
};