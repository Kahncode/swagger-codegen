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

#include "SWGTag.h"

#include "Dom/JsonObject.h"
#include "Templates/SharedPointer.h"

namespace Swagger 
{



	bool SWGTagRequest::IsValid() const
	{
        //TODO: test which parameters need to be set for valid request
		return true;
	}

    TSharedPtr<FJsonObject> SWGTagRequest::ToJson() const
	{
		auto JsonObject = MakeShared<FJsonObject>();

        JsonObject->SetNumberField("id", id);
        JsonObject->SetNumberField("name", name);

		return JsonObject;
	}

	bool SWGTagResponse::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		bool ParseSuccess = true;

        ParseSuccess &= JsonObject->TryGetNumberField("id", id);
        ParseSuccess &= JsonObject->TryGetNumberField("name", name);

		return ParseSuccess;
	}

	bool SWGTagResponse::ErrorFromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		_Error = MakeUnique<SWGTagErrorDetails>();
		return _Error->FromJson(JsonObject);
	}

	bool SWGTagResponse::SWGTagErrorDetails::FromJson(const TSharedPtr<FJsonObject>& JsonObject)
	{
		//TODO :!
		return true;
	}
}


}
