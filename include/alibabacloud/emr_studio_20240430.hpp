// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EMRSTUDIO20240430_H_
#define ALIBABACLOUD_EMRSTUDIO20240430_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EmrStudio20240430 {
class CreateWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertGroupId{};
  shared_ptr<string> alertStrategy{};
  shared_ptr<string> taskDefinitionJsonValue{};
  shared_ptr<string> taskRelationJsonValue{};
  shared_ptr<string> cronExpr{};
  shared_ptr<string> description{};
  shared_ptr<string> executionType{};
  shared_ptr<string> failureStrategy{};
  shared_ptr<string> name{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleEndTime{};
  shared_ptr<string> scheduleStartTime{};
  shared_ptr<string> scheduleState{};
  shared_ptr<string> taskDefinitionJson{};
  shared_ptr<string> taskRelationJson{};
  shared_ptr<string> timeZone{};
  shared_ptr<long> timeout{};
  shared_ptr<string> workflowInstancePriority{};
  shared_ptr<string> workflowParams{};
  shared_ptr<string> workspaceId{};

  CreateWorkflowRequest() {}

  explicit CreateWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertGroupId) {
      res["alertGroupId"] = boost::any(*alertGroupId);
    }
    if (alertStrategy) {
      res["alertStrategy"] = boost::any(*alertStrategy);
    }
    if (taskDefinitionJsonValue) {
      res["taskDefinitionJsonValue"] = boost::any(*taskDefinitionJsonValue);
    }
    if (taskRelationJsonValue) {
      res["taskRelationJsonValue"] = boost::any(*taskRelationJsonValue);
    }
    if (cronExpr) {
      res["cronExpr"] = boost::any(*cronExpr);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executionType) {
      res["executionType"] = boost::any(*executionType);
    }
    if (failureStrategy) {
      res["failureStrategy"] = boost::any(*failureStrategy);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentDirectoryId) {
      res["parentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleEndTime) {
      res["scheduleEndTime"] = boost::any(*scheduleEndTime);
    }
    if (scheduleStartTime) {
      res["scheduleStartTime"] = boost::any(*scheduleStartTime);
    }
    if (scheduleState) {
      res["scheduleState"] = boost::any(*scheduleState);
    }
    if (taskDefinitionJson) {
      res["taskDefinitionJson"] = boost::any(*taskDefinitionJson);
    }
    if (taskRelationJson) {
      res["taskRelationJson"] = boost::any(*taskRelationJson);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (workflowInstancePriority) {
      res["workflowInstancePriority"] = boost::any(*workflowInstancePriority);
    }
    if (workflowParams) {
      res["workflowParams"] = boost::any(*workflowParams);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertGroupId") != m.end() && !m["alertGroupId"].empty()) {
      alertGroupId = make_shared<string>(boost::any_cast<string>(m["alertGroupId"]));
    }
    if (m.find("alertStrategy") != m.end() && !m["alertStrategy"].empty()) {
      alertStrategy = make_shared<string>(boost::any_cast<string>(m["alertStrategy"]));
    }
    if (m.find("taskDefinitionJsonValue") != m.end() && !m["taskDefinitionJsonValue"].empty()) {
      taskDefinitionJsonValue = make_shared<string>(boost::any_cast<string>(m["taskDefinitionJsonValue"]));
    }
    if (m.find("taskRelationJsonValue") != m.end() && !m["taskRelationJsonValue"].empty()) {
      taskRelationJsonValue = make_shared<string>(boost::any_cast<string>(m["taskRelationJsonValue"]));
    }
    if (m.find("cronExpr") != m.end() && !m["cronExpr"].empty()) {
      cronExpr = make_shared<string>(boost::any_cast<string>(m["cronExpr"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executionType") != m.end() && !m["executionType"].empty()) {
      executionType = make_shared<string>(boost::any_cast<string>(m["executionType"]));
    }
    if (m.find("failureStrategy") != m.end() && !m["failureStrategy"].empty()) {
      failureStrategy = make_shared<string>(boost::any_cast<string>(m["failureStrategy"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentDirectoryId") != m.end() && !m["parentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["parentDirectoryId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("scheduleEndTime") != m.end() && !m["scheduleEndTime"].empty()) {
      scheduleEndTime = make_shared<string>(boost::any_cast<string>(m["scheduleEndTime"]));
    }
    if (m.find("scheduleStartTime") != m.end() && !m["scheduleStartTime"].empty()) {
      scheduleStartTime = make_shared<string>(boost::any_cast<string>(m["scheduleStartTime"]));
    }
    if (m.find("scheduleState") != m.end() && !m["scheduleState"].empty()) {
      scheduleState = make_shared<string>(boost::any_cast<string>(m["scheduleState"]));
    }
    if (m.find("taskDefinitionJson") != m.end() && !m["taskDefinitionJson"].empty()) {
      taskDefinitionJson = make_shared<string>(boost::any_cast<string>(m["taskDefinitionJson"]));
    }
    if (m.find("taskRelationJson") != m.end() && !m["taskRelationJson"].empty()) {
      taskRelationJson = make_shared<string>(boost::any_cast<string>(m["taskRelationJson"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("workflowInstancePriority") != m.end() && !m["workflowInstancePriority"].empty()) {
      workflowInstancePriority = make_shared<string>(boost::any_cast<string>(m["workflowInstancePriority"]));
    }
    if (m.find("workflowParams") != m.end() && !m["workflowParams"].empty()) {
      workflowParams = make_shared<string>(boost::any_cast<string>(m["workflowParams"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateWorkflowRequest() = default;
};
class CreateWorkflowResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> workflowId{};

  CreateWorkflowResponseBodyData() {}

  explicit CreateWorkflowResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
  }


  virtual ~CreateWorkflowResponseBodyData() = default;
};
class CreateWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateWorkflowResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateWorkflowResponseBody() {}

  explicit CreateWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateWorkflowResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateWorkflowResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateWorkflowResponseBody() = default;
};
class CreateWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkflowResponseBody> body{};

  CreateWorkflowResponse() {}

  explicit CreateWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkflowResponse() = default;
};
class DeleteWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DeleteWorkflowRequest() {}

  explicit DeleteWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteWorkflowRequest() = default;
};
class DeleteWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWorkflowResponseBody() {}

  explicit DeleteWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteWorkflowResponseBody() = default;
};
class DeleteWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkflowResponseBody> body{};

  DeleteWorkflowResponse() {}

  explicit DeleteWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkflowResponse() = default;
};
class DescribeManualTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeManualTaskRequest() {}

  explicit DescribeManualTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeManualTaskRequest() = default;
};
class DescribeManualTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> manualTaskId{};
  shared_ptr<string> manualTaskName{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> requestId{};

  DescribeManualTaskResponseBody() {}

  explicit DescribeManualTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (manualTaskId) {
      res["ManualTaskId"] = boost::any(*manualTaskId);
    }
    if (manualTaskName) {
      res["ManualTaskName"] = boost::any(*manualTaskName);
    }
    if (parentDirectoryId) {
      res["ParentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManualTaskId") != m.end() && !m["ManualTaskId"].empty()) {
      manualTaskId = make_shared<string>(boost::any_cast<string>(m["ManualTaskId"]));
    }
    if (m.find("ManualTaskName") != m.end() && !m["ManualTaskName"].empty()) {
      manualTaskName = make_shared<string>(boost::any_cast<string>(m["ManualTaskName"]));
    }
    if (m.find("ParentDirectoryId") != m.end() && !m["ParentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["ParentDirectoryId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DescribeManualTaskResponseBody() = default;
};
class DescribeManualTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeManualTaskResponseBody> body{};

  DescribeManualTaskResponse() {}

  explicit DescribeManualTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeManualTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeManualTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeManualTaskResponse() = default;
};
class DescribeManualTaskInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeManualTaskInstanceRequest() {}

  explicit DescribeManualTaskInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeManualTaskInstanceRequest() = default;
};
class DescribeManualTaskInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> externalAppId{};
  shared_ptr<string> manualTaskInstanceId{};
  shared_ptr<string> manualTaskInstanceName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};
  shared_ptr<string> requestId{};

  DescribeManualTaskInstanceResponseBody() {}

  explicit DescribeManualTaskInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emrClusterId) {
      res["EmrClusterId"] = boost::any(*emrClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (externalAppId) {
      res["ExternalAppId"] = boost::any(*externalAppId);
    }
    if (manualTaskInstanceId) {
      res["ManualTaskInstanceId"] = boost::any(*manualTaskInstanceId);
    }
    if (manualTaskInstanceName) {
      res["ManualTaskInstanceName"] = boost::any(*manualTaskInstanceName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmrClusterId") != m.end() && !m["EmrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["EmrClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExternalAppId") != m.end() && !m["ExternalAppId"].empty()) {
      externalAppId = make_shared<string>(boost::any_cast<string>(m["ExternalAppId"]));
    }
    if (m.find("ManualTaskInstanceId") != m.end() && !m["ManualTaskInstanceId"].empty()) {
      manualTaskInstanceId = make_shared<string>(boost::any_cast<string>(m["ManualTaskInstanceId"]));
    }
    if (m.find("ManualTaskInstanceName") != m.end() && !m["ManualTaskInstanceName"].empty()) {
      manualTaskInstanceName = make_shared<string>(boost::any_cast<string>(m["ManualTaskInstanceName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DescribeManualTaskInstanceResponseBody() = default;
};
class DescribeManualTaskInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeManualTaskInstanceResponseBody> body{};

  DescribeManualTaskInstanceResponse() {}

  explicit DescribeManualTaskInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeManualTaskInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeManualTaskInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeManualTaskInstanceResponse() = default;
};
class DescribeProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeProjectRequest() {}

  explicit DescribeProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeProjectRequest() = default;
};
class DescribeProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  DescribeProjectResponseBody() {}

  explicit DescribeProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DescribeProjectResponseBody() = default;
};
class DescribeProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeProjectResponseBody> body{};

  DescribeProjectResponse() {}

  explicit DescribeProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProjectResponse() = default;
};
class DescribeTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeTaskRequest() {}

  explicit DescribeTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeTaskRequest() = default;
};
class DescribeTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> delayTime{};
  shared_ptr<string> description{};
  shared_ptr<long> failRetryInterval{};
  shared_ptr<long> failRetryTimes{};
  shared_ptr<string> flag{};
  shared_ptr<string> projectId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskPriority{};
  shared_ptr<string> taskType{};
  shared_ptr<long> timeout{};
  shared_ptr<string> timeoutFlag{};
  shared_ptr<string> timeoutNotifyStrategy{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};
  shared_ptr<string> requestId{};

  DescribeTaskResponseBody() {}

  explicit DescribeTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failRetryInterval) {
      res["FailRetryInterval"] = boost::any(*failRetryInterval);
    }
    if (failRetryTimes) {
      res["FailRetryTimes"] = boost::any(*failRetryTimes);
    }
    if (flag) {
      res["Flag"] = boost::any(*flag);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskPriority) {
      res["TaskPriority"] = boost::any(*taskPriority);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutFlag) {
      res["TimeoutFlag"] = boost::any(*timeoutFlag);
    }
    if (timeoutNotifyStrategy) {
      res["TimeoutNotifyStrategy"] = boost::any(*timeoutNotifyStrategy);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailRetryInterval") != m.end() && !m["FailRetryInterval"].empty()) {
      failRetryInterval = make_shared<long>(boost::any_cast<long>(m["FailRetryInterval"]));
    }
    if (m.find("FailRetryTimes") != m.end() && !m["FailRetryTimes"].empty()) {
      failRetryTimes = make_shared<long>(boost::any_cast<long>(m["FailRetryTimes"]));
    }
    if (m.find("Flag") != m.end() && !m["Flag"].empty()) {
      flag = make_shared<string>(boost::any_cast<string>(m["Flag"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskPriority") != m.end() && !m["TaskPriority"].empty()) {
      taskPriority = make_shared<string>(boost::any_cast<string>(m["TaskPriority"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutFlag") != m.end() && !m["TimeoutFlag"].empty()) {
      timeoutFlag = make_shared<string>(boost::any_cast<string>(m["TimeoutFlag"]));
    }
    if (m.find("TimeoutNotifyStrategy") != m.end() && !m["TimeoutNotifyStrategy"].empty()) {
      timeoutNotifyStrategy = make_shared<string>(boost::any_cast<string>(m["TimeoutNotifyStrategy"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DescribeTaskResponseBody() = default;
};
class DescribeTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTaskResponseBody> body{};

  DescribeTaskResponse() {}

  explicit DescribeTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskResponse() = default;
};
class DescribeTaskInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeTaskInstanceRequest() {}

  explicit DescribeTaskInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeTaskInstanceRequest() = default;
};
class DescribeTaskInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dryRun{};
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> externalAppId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> retryTimes{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskInstanceId{};
  shared_ptr<string> taskInstanceName{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskVersion{};
  shared_ptr<string> workflowInstanceId{};
  shared_ptr<string> requestId{};

  DescribeTaskInstanceResponseBody() {}

  explicit DescribeTaskInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (emrClusterId) {
      res["EmrClusterId"] = boost::any(*emrClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (externalAppId) {
      res["ExternalAppId"] = boost::any(*externalAppId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retryTimes) {
      res["RetryTimes"] = boost::any(*retryTimes);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskInstanceId) {
      res["TaskInstanceId"] = boost::any(*taskInstanceId);
    }
    if (taskInstanceName) {
      res["TaskInstanceName"] = boost::any(*taskInstanceName);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskVersion) {
      res["TaskVersion"] = boost::any(*taskVersion);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("EmrClusterId") != m.end() && !m["EmrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["EmrClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExternalAppId") != m.end() && !m["ExternalAppId"].empty()) {
      externalAppId = make_shared<string>(boost::any_cast<string>(m["ExternalAppId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RetryTimes") != m.end() && !m["RetryTimes"].empty()) {
      retryTimes = make_shared<long>(boost::any_cast<long>(m["RetryTimes"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskInstanceId") != m.end() && !m["TaskInstanceId"].empty()) {
      taskInstanceId = make_shared<string>(boost::any_cast<string>(m["TaskInstanceId"]));
    }
    if (m.find("TaskInstanceName") != m.end() && !m["TaskInstanceName"].empty()) {
      taskInstanceName = make_shared<string>(boost::any_cast<string>(m["TaskInstanceName"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskVersion") != m.end() && !m["TaskVersion"].empty()) {
      taskVersion = make_shared<string>(boost::any_cast<string>(m["TaskVersion"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<string>(boost::any_cast<string>(m["WorkflowInstanceId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DescribeTaskInstanceResponseBody() = default;
};
class DescribeTaskInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTaskInstanceResponseBody> body{};

  DescribeTaskInstanceResponse() {}

  explicit DescribeTaskInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTaskInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskInstanceResponse() = default;
};
class DescribeWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeWorkflowRequest() {}

  explicit DescribeWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeWorkflowRequest() = default;
};
class DescribeWorkflowResponseBodySchedule : public Darabonba::Model {
public:
  shared_ptr<string> alertGroupId{};
  shared_ptr<string> alertStrategy{};
  shared_ptr<string> cronExpr{};
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> failureStrategy{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleEndTime{};
  shared_ptr<string> scheduleStartTime{};
  shared_ptr<string> scheduleState{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> workflowInstancePriority{};

  DescribeWorkflowResponseBodySchedule() {}

  explicit DescribeWorkflowResponseBodySchedule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertGroupId) {
      res["alertGroupId"] = boost::any(*alertGroupId);
    }
    if (alertStrategy) {
      res["alertStrategy"] = boost::any(*alertStrategy);
    }
    if (cronExpr) {
      res["cronExpr"] = boost::any(*cronExpr);
    }
    if (emrClusterId) {
      res["emrClusterId"] = boost::any(*emrClusterId);
    }
    if (failureStrategy) {
      res["failureStrategy"] = boost::any(*failureStrategy);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleEndTime) {
      res["scheduleEndTime"] = boost::any(*scheduleEndTime);
    }
    if (scheduleStartTime) {
      res["scheduleStartTime"] = boost::any(*scheduleStartTime);
    }
    if (scheduleState) {
      res["scheduleState"] = boost::any(*scheduleState);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (workflowInstancePriority) {
      res["workflowInstancePriority"] = boost::any(*workflowInstancePriority);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertGroupId") != m.end() && !m["alertGroupId"].empty()) {
      alertGroupId = make_shared<string>(boost::any_cast<string>(m["alertGroupId"]));
    }
    if (m.find("alertStrategy") != m.end() && !m["alertStrategy"].empty()) {
      alertStrategy = make_shared<string>(boost::any_cast<string>(m["alertStrategy"]));
    }
    if (m.find("cronExpr") != m.end() && !m["cronExpr"].empty()) {
      cronExpr = make_shared<string>(boost::any_cast<string>(m["cronExpr"]));
    }
    if (m.find("emrClusterId") != m.end() && !m["emrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["emrClusterId"]));
    }
    if (m.find("failureStrategy") != m.end() && !m["failureStrategy"].empty()) {
      failureStrategy = make_shared<string>(boost::any_cast<string>(m["failureStrategy"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("scheduleEndTime") != m.end() && !m["scheduleEndTime"].empty()) {
      scheduleEndTime = make_shared<string>(boost::any_cast<string>(m["scheduleEndTime"]));
    }
    if (m.find("scheduleStartTime") != m.end() && !m["scheduleStartTime"].empty()) {
      scheduleStartTime = make_shared<string>(boost::any_cast<string>(m["scheduleStartTime"]));
    }
    if (m.find("scheduleState") != m.end() && !m["scheduleState"].empty()) {
      scheduleState = make_shared<string>(boost::any_cast<string>(m["scheduleState"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("workflowInstancePriority") != m.end() && !m["workflowInstancePriority"].empty()) {
      workflowInstancePriority = make_shared<string>(boost::any_cast<string>(m["workflowInstancePriority"]));
    }
  }


  virtual ~DescribeWorkflowResponseBodySchedule() = default;
};
class DescribeWorkflowResponseBodyTaskRelations : public Darabonba::Model {
public:
  shared_ptr<string> postTaskId{};
  shared_ptr<string> preTaskId{};

  DescribeWorkflowResponseBodyTaskRelations() {}

  explicit DescribeWorkflowResponseBodyTaskRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postTaskId) {
      res["postTaskId"] = boost::any(*postTaskId);
    }
    if (preTaskId) {
      res["preTaskId"] = boost::any(*preTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("postTaskId") != m.end() && !m["postTaskId"].empty()) {
      postTaskId = make_shared<string>(boost::any_cast<string>(m["postTaskId"]));
    }
    if (m.find("preTaskId") != m.end() && !m["preTaskId"].empty()) {
      preTaskId = make_shared<string>(boost::any_cast<string>(m["preTaskId"]));
    }
  }


  virtual ~DescribeWorkflowResponseBodyTaskRelations() = default;
};
class DescribeWorkflowResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> taskId{};
  shared_ptr<long> version{};

  DescribeWorkflowResponseBodyTasks() {}

  explicit DescribeWorkflowResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~DescribeWorkflowResponseBodyTasks() = default;
};
class DescribeWorkflowResponseBodyWorkflow : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> executionType{};
  shared_ptr<string> name{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<long> timeout{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workflowParams{};

  DescribeWorkflowResponseBodyWorkflow() {}

  explicit DescribeWorkflowResponseBodyWorkflow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executionType) {
      res["executionType"] = boost::any(*executionType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentDirectoryId) {
      res["parentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workflowParams) {
      res["workflowParams"] = boost::any(*workflowParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executionType") != m.end() && !m["executionType"].empty()) {
      executionType = make_shared<string>(boost::any_cast<string>(m["executionType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentDirectoryId") != m.end() && !m["parentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["parentDirectoryId"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workflowParams") != m.end() && !m["workflowParams"].empty()) {
      workflowParams = make_shared<string>(boost::any_cast<string>(m["workflowParams"]));
    }
  }


  virtual ~DescribeWorkflowResponseBodyWorkflow() = default;
};
class DescribeWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeWorkflowResponseBodySchedule> schedule{};
  shared_ptr<vector<DescribeWorkflowResponseBodyTaskRelations>> taskRelations{};
  shared_ptr<vector<DescribeWorkflowResponseBodyTasks>> tasks{};
  shared_ptr<DescribeWorkflowResponseBodyWorkflow> workflow{};

  DescribeWorkflowResponseBody() {}

  explicit DescribeWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (schedule) {
      res["schedule"] = schedule ? boost::any(schedule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskRelations) {
      vector<boost::any> temp1;
      for(auto item1:*taskRelations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskRelations"] = boost::any(temp1);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tasks"] = boost::any(temp1);
    }
    if (workflow) {
      res["workflow"] = workflow ? boost::any(workflow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("schedule") != m.end() && !m["schedule"].empty()) {
      if (typeid(map<string, boost::any>) == m["schedule"].type()) {
        DescribeWorkflowResponseBodySchedule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["schedule"]));
        schedule = make_shared<DescribeWorkflowResponseBodySchedule>(model1);
      }
    }
    if (m.find("taskRelations") != m.end() && !m["taskRelations"].empty()) {
      if (typeid(vector<boost::any>) == m["taskRelations"].type()) {
        vector<DescribeWorkflowResponseBodyTaskRelations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskRelations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWorkflowResponseBodyTaskRelations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskRelations = make_shared<vector<DescribeWorkflowResponseBodyTaskRelations>>(expect1);
      }
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["tasks"].type()) {
        vector<DescribeWorkflowResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWorkflowResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<DescribeWorkflowResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("workflow") != m.end() && !m["workflow"].empty()) {
      if (typeid(map<string, boost::any>) == m["workflow"].type()) {
        DescribeWorkflowResponseBodyWorkflow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workflow"]));
        workflow = make_shared<DescribeWorkflowResponseBodyWorkflow>(model1);
      }
    }
  }


  virtual ~DescribeWorkflowResponseBody() = default;
};
class DescribeWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWorkflowResponseBody> body{};

  DescribeWorkflowResponse() {}

  explicit DescribeWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWorkflowResponse() = default;
};
class DescribeWorkflowInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  DescribeWorkflowInstanceRequest() {}

  explicit DescribeWorkflowInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DescribeWorkflowInstanceRequest() = default;
};
class DescribeWorkflowInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> alertGroupId{};
  shared_ptr<string> alertStrategy{};
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> failureStrategy{};
  shared_ptr<bool> isComplementData{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> restartTime{};
  shared_ptr<long> runTimes{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> timeout{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workflowInstanceId{};
  shared_ptr<string> workflowInstancePriority{};
  shared_ptr<long> workflowVersion{};

  DescribeWorkflowInstanceResponseBody() {}

  explicit DescribeWorkflowInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertGroupId) {
      res["alertGroupId"] = boost::any(*alertGroupId);
    }
    if (alertStrategy) {
      res["alertStrategy"] = boost::any(*alertStrategy);
    }
    if (emrClusterId) {
      res["emrClusterId"] = boost::any(*emrClusterId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (failureStrategy) {
      res["failureStrategy"] = boost::any(*failureStrategy);
    }
    if (isComplementData) {
      res["isComplementData"] = boost::any(*isComplementData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (restartTime) {
      res["restartTime"] = boost::any(*restartTime);
    }
    if (runTimes) {
      res["runTimes"] = boost::any(*runTimes);
    }
    if (scheduleTime) {
      res["scheduleTime"] = boost::any(*scheduleTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workflowInstanceId) {
      res["workflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (workflowInstancePriority) {
      res["workflowInstancePriority"] = boost::any(*workflowInstancePriority);
    }
    if (workflowVersion) {
      res["workflowVersion"] = boost::any(*workflowVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertGroupId") != m.end() && !m["alertGroupId"].empty()) {
      alertGroupId = make_shared<string>(boost::any_cast<string>(m["alertGroupId"]));
    }
    if (m.find("alertStrategy") != m.end() && !m["alertStrategy"].empty()) {
      alertStrategy = make_shared<string>(boost::any_cast<string>(m["alertStrategy"]));
    }
    if (m.find("emrClusterId") != m.end() && !m["emrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["emrClusterId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("failureStrategy") != m.end() && !m["failureStrategy"].empty()) {
      failureStrategy = make_shared<string>(boost::any_cast<string>(m["failureStrategy"]));
    }
    if (m.find("isComplementData") != m.end() && !m["isComplementData"].empty()) {
      isComplementData = make_shared<bool>(boost::any_cast<bool>(m["isComplementData"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("restartTime") != m.end() && !m["restartTime"].empty()) {
      restartTime = make_shared<string>(boost::any_cast<string>(m["restartTime"]));
    }
    if (m.find("runTimes") != m.end() && !m["runTimes"].empty()) {
      runTimes = make_shared<long>(boost::any_cast<long>(m["runTimes"]));
    }
    if (m.find("scheduleTime") != m.end() && !m["scheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["scheduleTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workflowInstanceId") != m.end() && !m["workflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<string>(boost::any_cast<string>(m["workflowInstanceId"]));
    }
    if (m.find("workflowInstancePriority") != m.end() && !m["workflowInstancePriority"].empty()) {
      workflowInstancePriority = make_shared<string>(boost::any_cast<string>(m["workflowInstancePriority"]));
    }
    if (m.find("workflowVersion") != m.end() && !m["workflowVersion"].empty()) {
      workflowVersion = make_shared<long>(boost::any_cast<long>(m["workflowVersion"]));
    }
  }


  virtual ~DescribeWorkflowInstanceResponseBody() = default;
};
class DescribeWorkflowInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWorkflowInstanceResponseBody> body{};

  DescribeWorkflowInstanceResponse() {}

  explicit DescribeWorkflowInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeWorkflowInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWorkflowInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWorkflowInstanceResponse() = default;
};
class ListManualTaskInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workspaceId{};

  ListManualTaskInstancesRequest() {}

  explicit ListManualTaskInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListManualTaskInstancesRequest() = default;
};
class ListManualTaskInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> externalAppId{};
  shared_ptr<string> manualTaskInstanceId{};
  shared_ptr<string> manualTaskInstanceName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};

  ListManualTaskInstancesResponseBodyData() {}

  explicit ListManualTaskInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emrClusterId) {
      res["EmrClusterId"] = boost::any(*emrClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (externalAppId) {
      res["ExternalAppId"] = boost::any(*externalAppId);
    }
    if (manualTaskInstanceId) {
      res["ManualTaskInstanceId"] = boost::any(*manualTaskInstanceId);
    }
    if (manualTaskInstanceName) {
      res["ManualTaskInstanceName"] = boost::any(*manualTaskInstanceName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmrClusterId") != m.end() && !m["EmrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["EmrClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExternalAppId") != m.end() && !m["ExternalAppId"].empty()) {
      externalAppId = make_shared<string>(boost::any_cast<string>(m["ExternalAppId"]));
    }
    if (m.find("ManualTaskInstanceId") != m.end() && !m["ManualTaskInstanceId"].empty()) {
      manualTaskInstanceId = make_shared<string>(boost::any_cast<string>(m["ManualTaskInstanceId"]));
    }
    if (m.find("ManualTaskInstanceName") != m.end() && !m["ManualTaskInstanceName"].empty()) {
      manualTaskInstanceName = make_shared<string>(boost::any_cast<string>(m["ManualTaskInstanceName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListManualTaskInstancesResponseBodyData() = default;
};
class ListManualTaskInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListManualTaskInstancesResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListManualTaskInstancesResponseBody() {}

  explicit ListManualTaskInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListManualTaskInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListManualTaskInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListManualTaskInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListManualTaskInstancesResponseBody() = default;
};
class ListManualTaskInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListManualTaskInstancesResponseBody> body{};

  ListManualTaskInstancesResponse() {}

  explicit ListManualTaskInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListManualTaskInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListManualTaskInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListManualTaskInstancesResponse() = default;
};
class ListManualTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> taskType{};
  shared_ptr<string> workspaceId{};

  ListManualTasksRequest() {}

  explicit ListManualTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListManualTasksRequest() = default;
};
class ListManualTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> manualTaskId{};
  shared_ptr<string> manualTaskName{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};
  shared_ptr<string> updateTime{};

  ListManualTasksResponseBodyData() {}

  explicit ListManualTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (manualTaskId) {
      res["ManualTaskId"] = boost::any(*manualTaskId);
    }
    if (manualTaskName) {
      res["ManualTaskName"] = boost::any(*manualTaskName);
    }
    if (parentDirectoryId) {
      res["ParentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ManualTaskId") != m.end() && !m["ManualTaskId"].empty()) {
      manualTaskId = make_shared<string>(boost::any_cast<string>(m["ManualTaskId"]));
    }
    if (m.find("ManualTaskName") != m.end() && !m["ManualTaskName"].empty()) {
      manualTaskName = make_shared<string>(boost::any_cast<string>(m["ManualTaskName"]));
    }
    if (m.find("ParentDirectoryId") != m.end() && !m["ParentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["ParentDirectoryId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListManualTasksResponseBodyData() = default;
};
class ListManualTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListManualTasksResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListManualTasksResponseBody() {}

  explicit ListManualTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListManualTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListManualTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListManualTasksResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListManualTasksResponseBody() = default;
};
class ListManualTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListManualTasksResponseBody> body{};

  ListManualTasksResponse() {}

  explicit ListManualTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListManualTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListManualTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListManualTasksResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> workspaceId{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  ListProjectsResponseBodyData() {}

  explicit ListProjectsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~ListProjectsResponseBodyData() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectsResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListProjectsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListProjectsResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListTaskInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workflowInstanceId{};
  shared_ptr<string> workspaceId{};

  ListTaskInstancesRequest() {}

  explicit ListTaskInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (workflowInstanceId) {
      res["workflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workflowInstanceId") != m.end() && !m["workflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<string>(boost::any_cast<string>(m["workflowInstanceId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListTaskInstancesRequest() = default;
};
class ListTaskInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dryRun{};
  shared_ptr<string> emrClusterId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> externalAppId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> retryTimes{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskInstanceId{};
  shared_ptr<string> taskInstanceName{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskType{};
  shared_ptr<string> taskVersion{};
  shared_ptr<string> workflowInstanceId{};

  ListTaskInstancesResponseBodyData() {}

  explicit ListTaskInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (emrClusterId) {
      res["EmrClusterId"] = boost::any(*emrClusterId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (externalAppId) {
      res["ExternalAppId"] = boost::any(*externalAppId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (retryTimes) {
      res["RetryTimes"] = boost::any(*retryTimes);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskInstanceId) {
      res["TaskInstanceId"] = boost::any(*taskInstanceId);
    }
    if (taskInstanceName) {
      res["TaskInstanceName"] = boost::any(*taskInstanceName);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (taskVersion) {
      res["TaskVersion"] = boost::any(*taskVersion);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["DryRun"]));
    }
    if (m.find("EmrClusterId") != m.end() && !m["EmrClusterId"].empty()) {
      emrClusterId = make_shared<string>(boost::any_cast<string>(m["EmrClusterId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExternalAppId") != m.end() && !m["ExternalAppId"].empty()) {
      externalAppId = make_shared<string>(boost::any_cast<string>(m["ExternalAppId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RetryTimes") != m.end() && !m["RetryTimes"].empty()) {
      retryTimes = make_shared<long>(boost::any_cast<long>(m["RetryTimes"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskInstanceId") != m.end() && !m["TaskInstanceId"].empty()) {
      taskInstanceId = make_shared<string>(boost::any_cast<string>(m["TaskInstanceId"]));
    }
    if (m.find("TaskInstanceName") != m.end() && !m["TaskInstanceName"].empty()) {
      taskInstanceName = make_shared<string>(boost::any_cast<string>(m["TaskInstanceName"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TaskVersion") != m.end() && !m["TaskVersion"].empty()) {
      taskVersion = make_shared<string>(boost::any_cast<string>(m["TaskVersion"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<string>(boost::any_cast<string>(m["WorkflowInstanceId"]));
    }
  }


  virtual ~ListTaskInstancesResponseBodyData() = default;
};
class ListTaskInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTaskInstancesResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListTaskInstancesResponseBody() {}

  explicit ListTaskInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListTaskInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTaskInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTaskInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListTaskInstancesResponseBody() = default;
};
class ListTaskInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskInstancesResponseBody> body{};

  ListTaskInstancesResponse() {}

  explicit ListTaskInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTaskInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskInstancesResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> taskType{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workspaceId{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> delayTime{};
  shared_ptr<string> description{};
  shared_ptr<long> failRetryInterval{};
  shared_ptr<long> failRetryTimes{};
  shared_ptr<string> flag{};
  shared_ptr<string> projectId{};
  shared_ptr<string> resourceIds{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> taskParams{};
  shared_ptr<string> taskPriority{};
  shared_ptr<string> taskType{};
  shared_ptr<long> timeout{};
  shared_ptr<string> timeoutFlag{};
  shared_ptr<string> timeoutNotifyStrategy{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};

  ListTasksResponseBodyData() {}

  explicit ListTasksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (failRetryInterval) {
      res["FailRetryInterval"] = boost::any(*failRetryInterval);
    }
    if (failRetryTimes) {
      res["FailRetryTimes"] = boost::any(*failRetryTimes);
    }
    if (flag) {
      res["Flag"] = boost::any(*flag);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (taskParams) {
      res["TaskParams"] = boost::any(*taskParams);
    }
    if (taskPriority) {
      res["TaskPriority"] = boost::any(*taskPriority);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timeoutFlag) {
      res["TimeoutFlag"] = boost::any(*timeoutFlag);
    }
    if (timeoutNotifyStrategy) {
      res["TimeoutNotifyStrategy"] = boost::any(*timeoutNotifyStrategy);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FailRetryInterval") != m.end() && !m["FailRetryInterval"].empty()) {
      failRetryInterval = make_shared<long>(boost::any_cast<long>(m["FailRetryInterval"]));
    }
    if (m.find("FailRetryTimes") != m.end() && !m["FailRetryTimes"].empty()) {
      failRetryTimes = make_shared<long>(boost::any_cast<long>(m["FailRetryTimes"]));
    }
    if (m.find("Flag") != m.end() && !m["Flag"].empty()) {
      flag = make_shared<string>(boost::any_cast<string>(m["Flag"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TaskParams") != m.end() && !m["TaskParams"].empty()) {
      taskParams = make_shared<string>(boost::any_cast<string>(m["TaskParams"]));
    }
    if (m.find("TaskPriority") != m.end() && !m["TaskPriority"].empty()) {
      taskPriority = make_shared<string>(boost::any_cast<string>(m["TaskPriority"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimeoutFlag") != m.end() && !m["TimeoutFlag"].empty()) {
      timeoutFlag = make_shared<string>(boost::any_cast<string>(m["TimeoutFlag"]));
    }
    if (m.find("TimeoutNotifyStrategy") != m.end() && !m["TimeoutNotifyStrategy"].empty()) {
      timeoutNotifyStrategy = make_shared<string>(boost::any_cast<string>(m["TimeoutNotifyStrategy"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListTasksResponseBodyData() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTasksResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListTasksResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTasksResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListWorkflowInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workspaceId{};

  ListWorkflowInstancesRequest() {}

  explicit ListWorkflowInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListWorkflowInstancesRequest() = default;
};
class ListWorkflowInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workflowInstanceId{};
  shared_ptr<long> workflowVersion{};

  ListWorkflowInstancesResponseBodyData() {}

  explicit ListWorkflowInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (scheduleTime) {
      res["scheduleTime"] = boost::any(*scheduleTime);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workflowInstanceId) {
      res["workflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (workflowVersion) {
      res["workflowVersion"] = boost::any(*workflowVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("scheduleTime") != m.end() && !m["scheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["scheduleTime"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workflowInstanceId") != m.end() && !m["workflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<string>(boost::any_cast<string>(m["workflowInstanceId"]));
    }
    if (m.find("workflowVersion") != m.end() && !m["workflowVersion"].empty()) {
      workflowVersion = make_shared<long>(boost::any_cast<long>(m["workflowVersion"]));
    }
  }


  virtual ~ListWorkflowInstancesResponseBodyData() = default;
};
class ListWorkflowInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkflowInstancesResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListWorkflowInstancesResponseBody() {}

  explicit ListWorkflowInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListWorkflowInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkflowInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListWorkflowInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListWorkflowInstancesResponseBody() = default;
};
class ListWorkflowInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkflowInstancesResponseBody> body{};

  ListWorkflowInstancesResponse() {}

  explicit ListWorkflowInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkflowInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkflowInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkflowInstancesResponse() = default;
};
class ListWorkflowsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> searchVal{};
  shared_ptr<string> workspaceId{};

  ListWorkflowsRequest() {}

  explicit ListWorkflowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (searchVal) {
      res["searchVal"] = boost::any(*searchVal);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("searchVal") != m.end() && !m["searchVal"].empty()) {
      searchVal = make_shared<string>(boost::any_cast<string>(m["searchVal"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListWorkflowsRequest() = default;
};
class ListWorkflowsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> workflowId{};

  ListWorkflowsResponseBodyData() {}

  explicit ListWorkflowsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentDirectoryId) {
      res["parentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentDirectoryId") != m.end() && !m["parentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["parentDirectoryId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
  }


  virtual ~ListWorkflowsResponseBodyData() = default;
};
class ListWorkflowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkflowsResponseBodyData>> data{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalSize{};

  ListWorkflowsResponseBody() {}

  explicit ListWorkflowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListWorkflowsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkflowsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListWorkflowsResponseBodyData>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~ListWorkflowsResponseBody() = default;
};
class ListWorkflowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkflowsResponseBody> body{};

  ListWorkflowsResponse() {}

  explicit ListWorkflowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListWorkflowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkflowsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkflowsResponse() = default;
};
class RunWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertGroupId{};
  shared_ptr<string> alertStrategy{};
  shared_ptr<string> complementDependentMode{};
  shared_ptr<string> dryRun{};
  shared_ptr<string> execType{};
  shared_ptr<string> expectedParallelismNumber{};
  shared_ptr<string> failureStrategy{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> runMode{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startParams{};
  shared_ptr<string> workflowId{};
  shared_ptr<string> workflowInstancePriority{};
  shared_ptr<string> workspaceId{};

  RunWorkflowRequest() {}

  explicit RunWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertGroupId) {
      res["alertGroupId"] = boost::any(*alertGroupId);
    }
    if (alertStrategy) {
      res["alertStrategy"] = boost::any(*alertStrategy);
    }
    if (complementDependentMode) {
      res["complementDependentMode"] = boost::any(*complementDependentMode);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    if (execType) {
      res["execType"] = boost::any(*execType);
    }
    if (expectedParallelismNumber) {
      res["expectedParallelismNumber"] = boost::any(*expectedParallelismNumber);
    }
    if (failureStrategy) {
      res["failureStrategy"] = boost::any(*failureStrategy);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (runMode) {
      res["runMode"] = boost::any(*runMode);
    }
    if (scheduleTime) {
      res["scheduleTime"] = boost::any(*scheduleTime);
    }
    if (startParams) {
      res["startParams"] = boost::any(*startParams);
    }
    if (workflowId) {
      res["workflowId"] = boost::any(*workflowId);
    }
    if (workflowInstancePriority) {
      res["workflowInstancePriority"] = boost::any(*workflowInstancePriority);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertGroupId") != m.end() && !m["alertGroupId"].empty()) {
      alertGroupId = make_shared<string>(boost::any_cast<string>(m["alertGroupId"]));
    }
    if (m.find("alertStrategy") != m.end() && !m["alertStrategy"].empty()) {
      alertStrategy = make_shared<string>(boost::any_cast<string>(m["alertStrategy"]));
    }
    if (m.find("complementDependentMode") != m.end() && !m["complementDependentMode"].empty()) {
      complementDependentMode = make_shared<string>(boost::any_cast<string>(m["complementDependentMode"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<string>(boost::any_cast<string>(m["dryRun"]));
    }
    if (m.find("execType") != m.end() && !m["execType"].empty()) {
      execType = make_shared<string>(boost::any_cast<string>(m["execType"]));
    }
    expectedParallelismNumber = make_shared<string>(boost::any_cast<string>(m["expectedParallelismNumber"]));
    if (m.find("failureStrategy") != m.end() && !m["failureStrategy"].empty()) {
      failureStrategy = make_shared<string>(boost::any_cast<string>(m["failureStrategy"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("runMode") != m.end() && !m["runMode"].empty()) {
      runMode = make_shared<string>(boost::any_cast<string>(m["runMode"]));
    }
    if (m.find("scheduleTime") != m.end() && !m["scheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["scheduleTime"]));
    }
    if (m.find("startParams") != m.end() && !m["startParams"].empty()) {
      startParams = make_shared<string>(boost::any_cast<string>(m["startParams"]));
    }
    if (m.find("workflowId") != m.end() && !m["workflowId"].empty()) {
      workflowId = make_shared<string>(boost::any_cast<string>(m["workflowId"]));
    }
    if (m.find("workflowInstancePriority") != m.end() && !m["workflowInstancePriority"].empty()) {
      workflowInstancePriority = make_shared<string>(boost::any_cast<string>(m["workflowInstancePriority"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~RunWorkflowRequest() = default;
};
class RunWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RunWorkflowResponseBody() {}

  explicit RunWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RunWorkflowResponseBody() = default;
};
class RunWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunWorkflowResponseBody> body{};

  RunWorkflowResponse() {}

  explicit RunWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~RunWorkflowResponse() = default;
};
class UpdateWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> alertGroupId{};
  shared_ptr<string> alertStrategy{};
  shared_ptr<string> taskDefinitionJsonValue{};
  shared_ptr<string> taskRelationJsonValue{};
  shared_ptr<string> cronExpr{};
  shared_ptr<string> description{};
  shared_ptr<string> executionType{};
  shared_ptr<string> failureStrategy{};
  shared_ptr<string> name{};
  shared_ptr<string> parentDirectoryId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduleEndTime{};
  shared_ptr<string> scheduleStartTime{};
  shared_ptr<string> scheduleState{};
  shared_ptr<string> taskDefinitionJson{};
  shared_ptr<string> taskRelationJson{};
  shared_ptr<string> timeZone{};
  shared_ptr<long> timeout{};
  shared_ptr<string> workflowInstancePriority{};
  shared_ptr<string> workflowParams{};
  shared_ptr<string> workspaceId{};

  UpdateWorkflowRequest() {}

  explicit UpdateWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alertGroupId) {
      res["alertGroupId"] = boost::any(*alertGroupId);
    }
    if (alertStrategy) {
      res["alertStrategy"] = boost::any(*alertStrategy);
    }
    if (taskDefinitionJsonValue) {
      res["taskDefinitionJsonValue"] = boost::any(*taskDefinitionJsonValue);
    }
    if (taskRelationJsonValue) {
      res["taskRelationJsonValue"] = boost::any(*taskRelationJsonValue);
    }
    if (cronExpr) {
      res["cronExpr"] = boost::any(*cronExpr);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (executionType) {
      res["executionType"] = boost::any(*executionType);
    }
    if (failureStrategy) {
      res["failureStrategy"] = boost::any(*failureStrategy);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentDirectoryId) {
      res["parentDirectoryId"] = boost::any(*parentDirectoryId);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduleEndTime) {
      res["scheduleEndTime"] = boost::any(*scheduleEndTime);
    }
    if (scheduleStartTime) {
      res["scheduleStartTime"] = boost::any(*scheduleStartTime);
    }
    if (scheduleState) {
      res["scheduleState"] = boost::any(*scheduleState);
    }
    if (taskDefinitionJson) {
      res["taskDefinitionJson"] = boost::any(*taskDefinitionJson);
    }
    if (taskRelationJson) {
      res["taskRelationJson"] = boost::any(*taskRelationJson);
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    if (workflowInstancePriority) {
      res["workflowInstancePriority"] = boost::any(*workflowInstancePriority);
    }
    if (workflowParams) {
      res["workflowParams"] = boost::any(*workflowParams);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alertGroupId") != m.end() && !m["alertGroupId"].empty()) {
      alertGroupId = make_shared<string>(boost::any_cast<string>(m["alertGroupId"]));
    }
    if (m.find("alertStrategy") != m.end() && !m["alertStrategy"].empty()) {
      alertStrategy = make_shared<string>(boost::any_cast<string>(m["alertStrategy"]));
    }
    if (m.find("taskDefinitionJsonValue") != m.end() && !m["taskDefinitionJsonValue"].empty()) {
      taskDefinitionJsonValue = make_shared<string>(boost::any_cast<string>(m["taskDefinitionJsonValue"]));
    }
    if (m.find("taskRelationJsonValue") != m.end() && !m["taskRelationJsonValue"].empty()) {
      taskRelationJsonValue = make_shared<string>(boost::any_cast<string>(m["taskRelationJsonValue"]));
    }
    if (m.find("cronExpr") != m.end() && !m["cronExpr"].empty()) {
      cronExpr = make_shared<string>(boost::any_cast<string>(m["cronExpr"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("executionType") != m.end() && !m["executionType"].empty()) {
      executionType = make_shared<string>(boost::any_cast<string>(m["executionType"]));
    }
    if (m.find("failureStrategy") != m.end() && !m["failureStrategy"].empty()) {
      failureStrategy = make_shared<string>(boost::any_cast<string>(m["failureStrategy"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentDirectoryId") != m.end() && !m["parentDirectoryId"].empty()) {
      parentDirectoryId = make_shared<string>(boost::any_cast<string>(m["parentDirectoryId"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("scheduleEndTime") != m.end() && !m["scheduleEndTime"].empty()) {
      scheduleEndTime = make_shared<string>(boost::any_cast<string>(m["scheduleEndTime"]));
    }
    if (m.find("scheduleStartTime") != m.end() && !m["scheduleStartTime"].empty()) {
      scheduleStartTime = make_shared<string>(boost::any_cast<string>(m["scheduleStartTime"]));
    }
    if (m.find("scheduleState") != m.end() && !m["scheduleState"].empty()) {
      scheduleState = make_shared<string>(boost::any_cast<string>(m["scheduleState"]));
    }
    if (m.find("taskDefinitionJson") != m.end() && !m["taskDefinitionJson"].empty()) {
      taskDefinitionJson = make_shared<string>(boost::any_cast<string>(m["taskDefinitionJson"]));
    }
    if (m.find("taskRelationJson") != m.end() && !m["taskRelationJson"].empty()) {
      taskRelationJson = make_shared<string>(boost::any_cast<string>(m["taskRelationJson"]));
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
    if (m.find("workflowInstancePriority") != m.end() && !m["workflowInstancePriority"].empty()) {
      workflowInstancePriority = make_shared<string>(boost::any_cast<string>(m["workflowInstancePriority"]));
    }
    if (m.find("workflowParams") != m.end() && !m["workflowParams"].empty()) {
      workflowParams = make_shared<string>(boost::any_cast<string>(m["workflowParams"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateWorkflowRequest() = default;
};
class UpdateWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWorkflowResponseBody() {}

  explicit UpdateWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateWorkflowResponseBody() = default;
};
class UpdateWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkflowResponseBody> body{};

  UpdateWorkflowResponse() {}

  explicit UpdateWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkflowResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  CreateWorkflowResponse createWorkflowWithOptions(shared_ptr<string> projectId,
                                                   shared_ptr<CreateWorkflowRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkflowResponse createWorkflow(shared_ptr<string> projectId, shared_ptr<CreateWorkflowRequest> request);
  DeleteWorkflowResponse deleteWorkflowWithOptions(shared_ptr<string> projectId,
                                                   shared_ptr<string> workflowId,
                                                   shared_ptr<DeleteWorkflowRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkflowResponse deleteWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<DeleteWorkflowRequest> request);
  DescribeManualTaskResponse describeManualTaskWithOptions(shared_ptr<string> projectId,
                                                           shared_ptr<string> manualTaskId,
                                                           shared_ptr<DescribeManualTaskRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeManualTaskResponse describeManualTask(shared_ptr<string> projectId, shared_ptr<string> manualTaskId, shared_ptr<DescribeManualTaskRequest> request);
  DescribeManualTaskInstanceResponse describeManualTaskInstanceWithOptions(shared_ptr<string> manualTaskInstanceId,
                                                                           shared_ptr<string> projectId,
                                                                           shared_ptr<DescribeManualTaskInstanceRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeManualTaskInstanceResponse describeManualTaskInstance(shared_ptr<string> manualTaskInstanceId, shared_ptr<string> projectId, shared_ptr<DescribeManualTaskInstanceRequest> request);
  DescribeProjectResponse describeProjectWithOptions(shared_ptr<string> projectId,
                                                     shared_ptr<DescribeProjectRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProjectResponse describeProject(shared_ptr<string> projectId, shared_ptr<DescribeProjectRequest> request);
  DescribeTaskResponse describeTaskWithOptions(shared_ptr<string> workflowId,
                                               shared_ptr<string> projectId,
                                               shared_ptr<string> taskId,
                                               shared_ptr<DescribeTaskRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskResponse describeTask(shared_ptr<string> workflowId,
                                    shared_ptr<string> projectId,
                                    shared_ptr<string> taskId,
                                    shared_ptr<DescribeTaskRequest> request);
  DescribeTaskInstanceResponse describeTaskInstanceWithOptions(shared_ptr<string> projectId,
                                                               shared_ptr<string> workflowInstanceId,
                                                               shared_ptr<string> taskInstanceId,
                                                               shared_ptr<DescribeTaskInstanceRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskInstanceResponse describeTaskInstance(shared_ptr<string> projectId,
                                                    shared_ptr<string> workflowInstanceId,
                                                    shared_ptr<string> taskInstanceId,
                                                    shared_ptr<DescribeTaskInstanceRequest> request);
  DescribeWorkflowResponse describeWorkflowWithOptions(shared_ptr<string> projectId,
                                                       shared_ptr<string> workflowId,
                                                       shared_ptr<DescribeWorkflowRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWorkflowResponse describeWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<DescribeWorkflowRequest> request);
  DescribeWorkflowInstanceResponse describeWorkflowInstanceWithOptions(shared_ptr<string> projectId,
                                                                       shared_ptr<string> workflowInstanceId,
                                                                       shared_ptr<DescribeWorkflowInstanceRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWorkflowInstanceResponse describeWorkflowInstance(shared_ptr<string> projectId, shared_ptr<string> workflowInstanceId, shared_ptr<DescribeWorkflowInstanceRequest> request);
  ListManualTaskInstancesResponse listManualTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                                     shared_ptr<ListManualTaskInstancesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListManualTaskInstancesResponse listManualTaskInstances(shared_ptr<string> projectId, shared_ptr<ListManualTaskInstancesRequest> request);
  ListManualTasksResponse listManualTasksWithOptions(shared_ptr<string> projectId,
                                                     shared_ptr<ListManualTasksRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListManualTasksResponse listManualTasks(shared_ptr<string> projectId, shared_ptr<ListManualTasksRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListTaskInstancesResponse listTaskInstancesWithOptions(shared_ptr<string> projectId,
                                                         shared_ptr<ListTaskInstancesRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskInstancesResponse listTaskInstances(shared_ptr<string> projectId, shared_ptr<ListTaskInstancesRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<string> projectId,
                                         shared_ptr<ListTasksRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<string> projectId, shared_ptr<ListTasksRequest> request);
  ListWorkflowInstancesResponse listWorkflowInstancesWithOptions(shared_ptr<string> projectId,
                                                                 shared_ptr<ListWorkflowInstancesRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkflowInstancesResponse listWorkflowInstances(shared_ptr<string> projectId, shared_ptr<ListWorkflowInstancesRequest> request);
  ListWorkflowsResponse listWorkflowsWithOptions(shared_ptr<string> projectId,
                                                 shared_ptr<ListWorkflowsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkflowsResponse listWorkflows(shared_ptr<string> projectId, shared_ptr<ListWorkflowsRequest> request);
  RunWorkflowResponse runWorkflowWithOptions(shared_ptr<string> projectId,
                                             shared_ptr<RunWorkflowRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunWorkflowResponse runWorkflow(shared_ptr<string> projectId, shared_ptr<RunWorkflowRequest> request);
  UpdateWorkflowResponse updateWorkflowWithOptions(shared_ptr<string> projectId,
                                                   shared_ptr<string> workflowId,
                                                   shared_ptr<UpdateWorkflowRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkflowResponse updateWorkflow(shared_ptr<string> projectId, shared_ptr<string> workflowId, shared_ptr<UpdateWorkflowRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EmrStudio20240430

#endif
