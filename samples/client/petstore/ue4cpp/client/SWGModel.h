/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#pragma once

#include "Interfaces/IHttpResponse.h"

class FJsonObject;

namespace Swagger 
{

    class SWG_API Model
	{ 
	public:
		virtual ~Model() {}
	};

	class SWG_API Request : public Model
	{
	public:
		virtual ~Request() {}
		virtual bool IsValid() const = 0;
		virtual TSharedPtr<FJsonObject> ToJson() const = 0;
	};

	class SWG_API ErrorDetails : public Model
	{
	public:
		virtual ~ErrorDetails() {}
		virtual bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) = 0;
	};

	class SWG_API Response : public Model
	{
	public:
		virtual ~Response() {}
		virtual bool FromJson(const TSharedPtr<FJsonObject>& JsonObject) = 0;
		virtual bool ErrorFromJson(const TSharedPtr<FJsonObject>& JsonObject) = 0;
		bool IsSuccessful() { return _Success; }
		EHttpResponseCodes::Type GetHttpResponseCode() { return _ResponseCode; }

	private:
		friend class SWGAPI;

		bool _Success;
		EHttpResponseCodes::Type _ResponseCode;
	};

}
