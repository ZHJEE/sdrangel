/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.13.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceActions.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceActions::SWGDeviceActions(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceActions::SWGDeviceActions() {
    device_hw_type = nullptr;
    m_device_hw_type_isSet = false;
    direction = 0;
    m_direction_isSet = false;
    originator_index = 0;
    m_originator_index_isSet = false;
    airspy_actions = nullptr;
    m_airspy_actions_isSet = false;
    airspy_hf_actions = nullptr;
    m_airspy_hf_actions_isSet = false;
    blade_rf1_input_actions = nullptr;
    m_blade_rf1_input_actions_isSet = false;
    fcd_pro_actions = nullptr;
    m_fcd_pro_actions_isSet = false;
    fcd_pro_plus_actions = nullptr;
    m_fcd_pro_plus_actions_isSet = false;
    hack_rf_input_actions = nullptr;
    m_hack_rf_input_actions_isSet = false;
    kiwi_sdr_actions = nullptr;
    m_kiwi_sdr_actions_isSet = false;
    lime_sdr_input_actions = nullptr;
    m_lime_sdr_input_actions_isSet = false;
    local_input_actions = nullptr;
    m_local_input_actions_isSet = false;
    perseus_actions = nullptr;
    m_perseus_actions_isSet = false;
    pluto_sdr_input_actions = nullptr;
    m_pluto_sdr_input_actions_isSet = false;
    remote_input_actions = nullptr;
    m_remote_input_actions_isSet = false;
    rtl_sdr_actions = nullptr;
    m_rtl_sdr_actions_isSet = false;
    sdr_play_actions = nullptr;
    m_sdr_play_actions_isSet = false;
    soapy_sdr_input_actions = nullptr;
    m_soapy_sdr_input_actions_isSet = false;
    test_source_actions = nullptr;
    m_test_source_actions_isSet = false;
    xtrx_input_actions = nullptr;
    m_xtrx_input_actions_isSet = false;
}

SWGDeviceActions::~SWGDeviceActions() {
    this->cleanup();
}

void
SWGDeviceActions::init() {
    device_hw_type = new QString("");
    m_device_hw_type_isSet = false;
    direction = 0;
    m_direction_isSet = false;
    originator_index = 0;
    m_originator_index_isSet = false;
    airspy_actions = new SWGAirspyActions();
    m_airspy_actions_isSet = false;
    airspy_hf_actions = new SWGAirspyHFActions();
    m_airspy_hf_actions_isSet = false;
    blade_rf1_input_actions = new SWGBladeRF1InputActions();
    m_blade_rf1_input_actions_isSet = false;
    fcd_pro_actions = new SWGFCDProActions();
    m_fcd_pro_actions_isSet = false;
    fcd_pro_plus_actions = new SWGFCDProPlusActions();
    m_fcd_pro_plus_actions_isSet = false;
    hack_rf_input_actions = new SWGHackRFInputActions();
    m_hack_rf_input_actions_isSet = false;
    kiwi_sdr_actions = new SWGKiwiSDRActions();
    m_kiwi_sdr_actions_isSet = false;
    lime_sdr_input_actions = new SWGLimeSdrInputActions();
    m_lime_sdr_input_actions_isSet = false;
    local_input_actions = new SWGLocalInputActions();
    m_local_input_actions_isSet = false;
    perseus_actions = new SWGPerseusActions();
    m_perseus_actions_isSet = false;
    pluto_sdr_input_actions = new SWGPlutoSdrInputActions();
    m_pluto_sdr_input_actions_isSet = false;
    remote_input_actions = new SWGRemoteInputActions();
    m_remote_input_actions_isSet = false;
    rtl_sdr_actions = new SWGRtlSdrActions();
    m_rtl_sdr_actions_isSet = false;
    sdr_play_actions = new SWGSDRPlayActions();
    m_sdr_play_actions_isSet = false;
    soapy_sdr_input_actions = new SWGSoapySDRInputActions();
    m_soapy_sdr_input_actions_isSet = false;
    test_source_actions = new SWGTestSourceActions();
    m_test_source_actions_isSet = false;
    xtrx_input_actions = new SWGXtrxInputActions();
    m_xtrx_input_actions_isSet = false;
}

void
SWGDeviceActions::cleanup() {
    if(device_hw_type != nullptr) { 
        delete device_hw_type;
    }


    if(airspy_actions != nullptr) { 
        delete airspy_actions;
    }
    if(airspy_hf_actions != nullptr) { 
        delete airspy_hf_actions;
    }
    if(blade_rf1_input_actions != nullptr) { 
        delete blade_rf1_input_actions;
    }
    if(fcd_pro_actions != nullptr) { 
        delete fcd_pro_actions;
    }
    if(fcd_pro_plus_actions != nullptr) { 
        delete fcd_pro_plus_actions;
    }
    if(hack_rf_input_actions != nullptr) { 
        delete hack_rf_input_actions;
    }
    if(kiwi_sdr_actions != nullptr) { 
        delete kiwi_sdr_actions;
    }
    if(lime_sdr_input_actions != nullptr) { 
        delete lime_sdr_input_actions;
    }
    if(local_input_actions != nullptr) { 
        delete local_input_actions;
    }
    if(perseus_actions != nullptr) { 
        delete perseus_actions;
    }
    if(pluto_sdr_input_actions != nullptr) { 
        delete pluto_sdr_input_actions;
    }
    if(remote_input_actions != nullptr) { 
        delete remote_input_actions;
    }
    if(rtl_sdr_actions != nullptr) { 
        delete rtl_sdr_actions;
    }
    if(sdr_play_actions != nullptr) { 
        delete sdr_play_actions;
    }
    if(soapy_sdr_input_actions != nullptr) { 
        delete soapy_sdr_input_actions;
    }
    if(test_source_actions != nullptr) { 
        delete test_source_actions;
    }
    if(xtrx_input_actions != nullptr) { 
        delete xtrx_input_actions;
    }
}

SWGDeviceActions*
SWGDeviceActions::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceActions::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_hw_type, pJson["deviceHwType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&direction, pJson["direction"], "qint32", "");
    
    ::SWGSDRangel::setValue(&originator_index, pJson["originatorIndex"], "qint32", "");
    
    ::SWGSDRangel::setValue(&airspy_actions, pJson["airspyActions"], "SWGAirspyActions", "SWGAirspyActions");
    
    ::SWGSDRangel::setValue(&airspy_hf_actions, pJson["airspyHFActions"], "SWGAirspyHFActions", "SWGAirspyHFActions");
    
    ::SWGSDRangel::setValue(&blade_rf1_input_actions, pJson["bladeRF1InputActions"], "SWGBladeRF1InputActions", "SWGBladeRF1InputActions");
    
    ::SWGSDRangel::setValue(&fcd_pro_actions, pJson["fcdProActions"], "SWGFCDProActions", "SWGFCDProActions");
    
    ::SWGSDRangel::setValue(&fcd_pro_plus_actions, pJson["fcdProPlusActions"], "SWGFCDProPlusActions", "SWGFCDProPlusActions");
    
    ::SWGSDRangel::setValue(&hack_rf_input_actions, pJson["hackRFInputActions"], "SWGHackRFInputActions", "SWGHackRFInputActions");
    
    ::SWGSDRangel::setValue(&kiwi_sdr_actions, pJson["kiwiSDRActions"], "SWGKiwiSDRActions", "SWGKiwiSDRActions");
    
    ::SWGSDRangel::setValue(&lime_sdr_input_actions, pJson["limeSdrInputActions"], "SWGLimeSdrInputActions", "SWGLimeSdrInputActions");
    
    ::SWGSDRangel::setValue(&local_input_actions, pJson["localInputActions"], "SWGLocalInputActions", "SWGLocalInputActions");
    
    ::SWGSDRangel::setValue(&perseus_actions, pJson["perseusActions"], "SWGPerseusActions", "SWGPerseusActions");
    
    ::SWGSDRangel::setValue(&pluto_sdr_input_actions, pJson["plutoSdrInputActions"], "SWGPlutoSdrInputActions", "SWGPlutoSdrInputActions");
    
    ::SWGSDRangel::setValue(&remote_input_actions, pJson["remoteInputActions"], "SWGRemoteInputActions", "SWGRemoteInputActions");
    
    ::SWGSDRangel::setValue(&rtl_sdr_actions, pJson["rtlSdrActions"], "SWGRtlSdrActions", "SWGRtlSdrActions");
    
    ::SWGSDRangel::setValue(&sdr_play_actions, pJson["sdrPlayActions"], "SWGSDRPlayActions", "SWGSDRPlayActions");
    
    ::SWGSDRangel::setValue(&soapy_sdr_input_actions, pJson["soapySDRInputActions"], "SWGSoapySDRInputActions", "SWGSoapySDRInputActions");
    
    ::SWGSDRangel::setValue(&test_source_actions, pJson["testSourceActions"], "SWGTestSourceActions", "SWGTestSourceActions");
    
    ::SWGSDRangel::setValue(&xtrx_input_actions, pJson["xtrxInputActions"], "SWGXtrxInputActions", "SWGXtrxInputActions");
    
}

QString
SWGDeviceActions::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceActions::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_hw_type != nullptr && *device_hw_type != QString("")){
        toJsonValue(QString("deviceHwType"), device_hw_type, obj, QString("QString"));
    }
    if(m_direction_isSet){
        obj->insert("direction", QJsonValue(direction));
    }
    if(m_originator_index_isSet){
        obj->insert("originatorIndex", QJsonValue(originator_index));
    }
    if((airspy_actions != nullptr) && (airspy_actions->isSet())){
        toJsonValue(QString("airspyActions"), airspy_actions, obj, QString("SWGAirspyActions"));
    }
    if((airspy_hf_actions != nullptr) && (airspy_hf_actions->isSet())){
        toJsonValue(QString("airspyHFActions"), airspy_hf_actions, obj, QString("SWGAirspyHFActions"));
    }
    if((blade_rf1_input_actions != nullptr) && (blade_rf1_input_actions->isSet())){
        toJsonValue(QString("bladeRF1InputActions"), blade_rf1_input_actions, obj, QString("SWGBladeRF1InputActions"));
    }
    if((fcd_pro_actions != nullptr) && (fcd_pro_actions->isSet())){
        toJsonValue(QString("fcdProActions"), fcd_pro_actions, obj, QString("SWGFCDProActions"));
    }
    if((fcd_pro_plus_actions != nullptr) && (fcd_pro_plus_actions->isSet())){
        toJsonValue(QString("fcdProPlusActions"), fcd_pro_plus_actions, obj, QString("SWGFCDProPlusActions"));
    }
    if((hack_rf_input_actions != nullptr) && (hack_rf_input_actions->isSet())){
        toJsonValue(QString("hackRFInputActions"), hack_rf_input_actions, obj, QString("SWGHackRFInputActions"));
    }
    if((kiwi_sdr_actions != nullptr) && (kiwi_sdr_actions->isSet())){
        toJsonValue(QString("kiwiSDRActions"), kiwi_sdr_actions, obj, QString("SWGKiwiSDRActions"));
    }
    if((lime_sdr_input_actions != nullptr) && (lime_sdr_input_actions->isSet())){
        toJsonValue(QString("limeSdrInputActions"), lime_sdr_input_actions, obj, QString("SWGLimeSdrInputActions"));
    }
    if((local_input_actions != nullptr) && (local_input_actions->isSet())){
        toJsonValue(QString("localInputActions"), local_input_actions, obj, QString("SWGLocalInputActions"));
    }
    if((perseus_actions != nullptr) && (perseus_actions->isSet())){
        toJsonValue(QString("perseusActions"), perseus_actions, obj, QString("SWGPerseusActions"));
    }
    if((pluto_sdr_input_actions != nullptr) && (pluto_sdr_input_actions->isSet())){
        toJsonValue(QString("plutoSdrInputActions"), pluto_sdr_input_actions, obj, QString("SWGPlutoSdrInputActions"));
    }
    if((remote_input_actions != nullptr) && (remote_input_actions->isSet())){
        toJsonValue(QString("remoteInputActions"), remote_input_actions, obj, QString("SWGRemoteInputActions"));
    }
    if((rtl_sdr_actions != nullptr) && (rtl_sdr_actions->isSet())){
        toJsonValue(QString("rtlSdrActions"), rtl_sdr_actions, obj, QString("SWGRtlSdrActions"));
    }
    if((sdr_play_actions != nullptr) && (sdr_play_actions->isSet())){
        toJsonValue(QString("sdrPlayActions"), sdr_play_actions, obj, QString("SWGSDRPlayActions"));
    }
    if((soapy_sdr_input_actions != nullptr) && (soapy_sdr_input_actions->isSet())){
        toJsonValue(QString("soapySDRInputActions"), soapy_sdr_input_actions, obj, QString("SWGSoapySDRInputActions"));
    }
    if((test_source_actions != nullptr) && (test_source_actions->isSet())){
        toJsonValue(QString("testSourceActions"), test_source_actions, obj, QString("SWGTestSourceActions"));
    }
    if((xtrx_input_actions != nullptr) && (xtrx_input_actions->isSet())){
        toJsonValue(QString("xtrxInputActions"), xtrx_input_actions, obj, QString("SWGXtrxInputActions"));
    }

    return obj;
}

QString*
SWGDeviceActions::getDeviceHwType() {
    return device_hw_type;
}
void
SWGDeviceActions::setDeviceHwType(QString* device_hw_type) {
    this->device_hw_type = device_hw_type;
    this->m_device_hw_type_isSet = true;
}

qint32
SWGDeviceActions::getDirection() {
    return direction;
}
void
SWGDeviceActions::setDirection(qint32 direction) {
    this->direction = direction;
    this->m_direction_isSet = true;
}

qint32
SWGDeviceActions::getOriginatorIndex() {
    return originator_index;
}
void
SWGDeviceActions::setOriginatorIndex(qint32 originator_index) {
    this->originator_index = originator_index;
    this->m_originator_index_isSet = true;
}

SWGAirspyActions*
SWGDeviceActions::getAirspyActions() {
    return airspy_actions;
}
void
SWGDeviceActions::setAirspyActions(SWGAirspyActions* airspy_actions) {
    this->airspy_actions = airspy_actions;
    this->m_airspy_actions_isSet = true;
}

SWGAirspyHFActions*
SWGDeviceActions::getAirspyHfActions() {
    return airspy_hf_actions;
}
void
SWGDeviceActions::setAirspyHfActions(SWGAirspyHFActions* airspy_hf_actions) {
    this->airspy_hf_actions = airspy_hf_actions;
    this->m_airspy_hf_actions_isSet = true;
}

SWGBladeRF1InputActions*
SWGDeviceActions::getBladeRf1InputActions() {
    return blade_rf1_input_actions;
}
void
SWGDeviceActions::setBladeRf1InputActions(SWGBladeRF1InputActions* blade_rf1_input_actions) {
    this->blade_rf1_input_actions = blade_rf1_input_actions;
    this->m_blade_rf1_input_actions_isSet = true;
}

SWGFCDProActions*
SWGDeviceActions::getFcdProActions() {
    return fcd_pro_actions;
}
void
SWGDeviceActions::setFcdProActions(SWGFCDProActions* fcd_pro_actions) {
    this->fcd_pro_actions = fcd_pro_actions;
    this->m_fcd_pro_actions_isSet = true;
}

SWGFCDProPlusActions*
SWGDeviceActions::getFcdProPlusActions() {
    return fcd_pro_plus_actions;
}
void
SWGDeviceActions::setFcdProPlusActions(SWGFCDProPlusActions* fcd_pro_plus_actions) {
    this->fcd_pro_plus_actions = fcd_pro_plus_actions;
    this->m_fcd_pro_plus_actions_isSet = true;
}

SWGHackRFInputActions*
SWGDeviceActions::getHackRfInputActions() {
    return hack_rf_input_actions;
}
void
SWGDeviceActions::setHackRfInputActions(SWGHackRFInputActions* hack_rf_input_actions) {
    this->hack_rf_input_actions = hack_rf_input_actions;
    this->m_hack_rf_input_actions_isSet = true;
}

SWGKiwiSDRActions*
SWGDeviceActions::getKiwiSdrActions() {
    return kiwi_sdr_actions;
}
void
SWGDeviceActions::setKiwiSdrActions(SWGKiwiSDRActions* kiwi_sdr_actions) {
    this->kiwi_sdr_actions = kiwi_sdr_actions;
    this->m_kiwi_sdr_actions_isSet = true;
}

SWGLimeSdrInputActions*
SWGDeviceActions::getLimeSdrInputActions() {
    return lime_sdr_input_actions;
}
void
SWGDeviceActions::setLimeSdrInputActions(SWGLimeSdrInputActions* lime_sdr_input_actions) {
    this->lime_sdr_input_actions = lime_sdr_input_actions;
    this->m_lime_sdr_input_actions_isSet = true;
}

SWGLocalInputActions*
SWGDeviceActions::getLocalInputActions() {
    return local_input_actions;
}
void
SWGDeviceActions::setLocalInputActions(SWGLocalInputActions* local_input_actions) {
    this->local_input_actions = local_input_actions;
    this->m_local_input_actions_isSet = true;
}

SWGPerseusActions*
SWGDeviceActions::getPerseusActions() {
    return perseus_actions;
}
void
SWGDeviceActions::setPerseusActions(SWGPerseusActions* perseus_actions) {
    this->perseus_actions = perseus_actions;
    this->m_perseus_actions_isSet = true;
}

SWGPlutoSdrInputActions*
SWGDeviceActions::getPlutoSdrInputActions() {
    return pluto_sdr_input_actions;
}
void
SWGDeviceActions::setPlutoSdrInputActions(SWGPlutoSdrInputActions* pluto_sdr_input_actions) {
    this->pluto_sdr_input_actions = pluto_sdr_input_actions;
    this->m_pluto_sdr_input_actions_isSet = true;
}

SWGRemoteInputActions*
SWGDeviceActions::getRemoteInputActions() {
    return remote_input_actions;
}
void
SWGDeviceActions::setRemoteInputActions(SWGRemoteInputActions* remote_input_actions) {
    this->remote_input_actions = remote_input_actions;
    this->m_remote_input_actions_isSet = true;
}

SWGRtlSdrActions*
SWGDeviceActions::getRtlSdrActions() {
    return rtl_sdr_actions;
}
void
SWGDeviceActions::setRtlSdrActions(SWGRtlSdrActions* rtl_sdr_actions) {
    this->rtl_sdr_actions = rtl_sdr_actions;
    this->m_rtl_sdr_actions_isSet = true;
}

SWGSDRPlayActions*
SWGDeviceActions::getSdrPlayActions() {
    return sdr_play_actions;
}
void
SWGDeviceActions::setSdrPlayActions(SWGSDRPlayActions* sdr_play_actions) {
    this->sdr_play_actions = sdr_play_actions;
    this->m_sdr_play_actions_isSet = true;
}

SWGSoapySDRInputActions*
SWGDeviceActions::getSoapySdrInputActions() {
    return soapy_sdr_input_actions;
}
void
SWGDeviceActions::setSoapySdrInputActions(SWGSoapySDRInputActions* soapy_sdr_input_actions) {
    this->soapy_sdr_input_actions = soapy_sdr_input_actions;
    this->m_soapy_sdr_input_actions_isSet = true;
}

SWGTestSourceActions*
SWGDeviceActions::getTestSourceActions() {
    return test_source_actions;
}
void
SWGDeviceActions::setTestSourceActions(SWGTestSourceActions* test_source_actions) {
    this->test_source_actions = test_source_actions;
    this->m_test_source_actions_isSet = true;
}

SWGXtrxInputActions*
SWGDeviceActions::getXtrxInputActions() {
    return xtrx_input_actions;
}
void
SWGDeviceActions::setXtrxInputActions(SWGXtrxInputActions* xtrx_input_actions) {
    this->xtrx_input_actions = xtrx_input_actions;
    this->m_xtrx_input_actions_isSet = true;
}


bool
SWGDeviceActions::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_hw_type && *device_hw_type != QString("")){
            isObjectUpdated = true; break;
        }
        if(m_direction_isSet){
            isObjectUpdated = true; break;
        }
        if(m_originator_index_isSet){
            isObjectUpdated = true; break;
        }
        if(airspy_actions && airspy_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(airspy_hf_actions && airspy_hf_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(blade_rf1_input_actions && blade_rf1_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(fcd_pro_actions && fcd_pro_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(fcd_pro_plus_actions && fcd_pro_plus_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(hack_rf_input_actions && hack_rf_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(kiwi_sdr_actions && kiwi_sdr_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(lime_sdr_input_actions && lime_sdr_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(local_input_actions && local_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(perseus_actions && perseus_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(pluto_sdr_input_actions && pluto_sdr_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(remote_input_actions && remote_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(rtl_sdr_actions && rtl_sdr_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(sdr_play_actions && sdr_play_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(soapy_sdr_input_actions && soapy_sdr_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(test_source_actions && test_source_actions->isSet()){
            isObjectUpdated = true; break;
        }
        if(xtrx_input_actions && xtrx_input_actions->isSet()){
            isObjectUpdated = true; break;
        }
    }while(false);
    return isObjectUpdated;
}
}
