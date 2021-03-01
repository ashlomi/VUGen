Action()
{

	web_add_auto_header("Accept-Encoding", "gzip, deflate");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; Touch; rv:11.0) like Gecko");

	web_add_auto_header("Accept-Language", "en-US");

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; Touch; rv:11.0) like Gecko");

	web_add_auto_header("Accept-Language", "en-US");

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; Touch; rv:11.0) like Gecko");

	web_add_auto_header("Accept-Encoding", "gzip");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.182 Safari/537.36 Edg/88.0.705.81");

	web_add_auto_header("Accept-Encoding", "gzip, deflate, br");

	web_add_auto_header("Accept-Language", "en-US,en;q=0.9");

	web_add_header("Content-Type", "application/json");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; WOW64; Trident/7.0; Touch; rv:11.0) like Gecko");

	web_add_auto_header("Accept-Encoding", "gzip, deflate");

	web_add_auto_header("Accept-Language", "en-US");

	web_add_auto_header("Accept-Encoding", "gzip, deflate, br");

	web_add_auto_header("Accept-Language", "en-US,en;q=0.9");

	web_add_auto_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.182 Safari/537.36 Edg/88.0.705.81");

	lr_think_time(21);

	web_add_header("Content-Type", "text/plain");

	web_add_auto_header("Accept-Encoding", "gzip, deflate");

	web_add_auto_header("Accept-Encoding", "gzip, deflate, br");

	return 0;
}