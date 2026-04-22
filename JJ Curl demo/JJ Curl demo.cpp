#include <iostream>
#include <string>
#include <curl/curl.h> 

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output)
{
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

std::string getHTML(const std::string& url)
{
    CURL* curl = curl_easy_init();
    std::string response;

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

        // Important for HTTPS
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);

        CURLcode res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    return response;
}

int main()
{
    std::string url = "https://github.com/jojosrepositories";
    std::string html = getHTML(url);

    //here is a very useful comment

    std::cout << html << std::endl;
}