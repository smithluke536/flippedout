ADD_SCENE(nfc, start, Start)
ADD_SCENE(nfc, read, Read)
ADD_SCENE(nfc, saved_menu, SavedMenu)
ADD_SCENE(nfc, extra_actions, ExtraActions)
ADD_SCENE(nfc, set_type, SetType)
ADD_SCENE(nfc, set_sak, SetSak)
ADD_SCENE(nfc, set_atqa, SetAtqa)
ADD_SCENE(nfc, set_uid, SetUid)
ADD_SCENE(nfc, generate_info, GenerateInfo)
ADD_SCENE(nfc, read_card_success, ReadCardSuccess)
ADD_SCENE(nfc, save_name, SaveName)
ADD_SCENE(nfc, save_success, SaveSuccess)
ADD_SCENE(nfc, file_select, FileSelect)
ADD_SCENE(nfc, emulate_uid, EmulateUid)
ADD_SCENE(nfc, nfca_read_success, NfcaReadSuccess)
ADD_SCENE(nfc, nfca_menu, NfcaMenu)
ADD_SCENE(nfc, nfcv_menu, NfcVMenu)
ADD_SCENE(nfc, nfcv_unlock_menu, NfcVUnlockMenu)
ADD_SCENE(nfc, nfcv_key_input, NfcVKeyInput)
ADD_SCENE(nfc, nfcv_unlock, NfcVUnlock)
ADD_SCENE(nfc, nfcv_emulate, NfcVEmulate)
ADD_SCENE(nfc, nfcv_sniff, NfcVSniff)
ADD_SCENE(nfc, mf_ultralight_read_success, MfUltralightReadSuccess)
ADD_SCENE(nfc, mf_ultralight_data, MfUltralightData)
ADD_SCENE(nfc, mf_ultralight_menu, MfUltralightMenu)
ADD_SCENE(nfc, mf_ultralight_emulate, MfUltralightEmulate)
ADD_SCENE(nfc, mf_ultralight_read_auth, MfUltralightReadAuth)
ADD_SCENE(nfc, mf_ultralight_read_auth_result, MfUltralightReadAuthResult)
ADD_SCENE(nfc, mf_ultralight_key_input, MfUltralightKeyInput)
ADD_SCENE(nfc, mf_ultralight_unlock_auto, MfUltralightUnlockAuto)
ADD_SCENE(nfc, mf_ultralight_unlock_menu, MfUltralightUnlockMenu)
ADD_SCENE(nfc, mf_ultralight_unlock_warn, MfUltralightUnlockWarn)
ADD_SCENE(nfc, mf_desfire_read_success, MfDesfireReadSuccess)
ADD_SCENE(nfc, mf_desfire_menu, MfDesfireMenu)
ADD_SCENE(nfc, mf_desfire_data, MfDesfireData)
ADD_SCENE(nfc, mf_desfire_app, MfDesfireApp)
ADD_SCENE(nfc, mf_classic_read_success, MfClassicReadSuccess)
ADD_SCENE(nfc, mf_classic_data, MfClassicData)
ADD_SCENE(nfc, mf_classic_menu, MfClassicMenu)
ADD_SCENE(nfc, mf_classic_emulate, MfClassicEmulate)
ADD_SCENE(nfc, mf_classic_keys, MfClassicKeys)
ADD_SCENE(nfc, mf_classic_keys_add, MfClassicKeysAdd)
ADD_SCENE(nfc, mf_classic_keys_list, MfClassicKeysList)
ADD_SCENE(nfc, mf_classic_keys_delete, MfClassicKeysDelete)
ADD_SCENE(nfc, mf_classic_keys_warn_duplicate, MfClassicKeysWarnDuplicate)
ADD_SCENE(nfc, mf_classic_dict_attack, MfClassicDictAttack)
ADD_SCENE(nfc, mf_classic_write, MfClassicWrite)
ADD_SCENE(nfc, mf_classic_write_success, MfClassicWriteSuccess)
ADD_SCENE(nfc, mf_classic_write_fail, MfClassicWriteFail)
ADD_SCENE(nfc, mf_classic_update, MfClassicUpdate)
ADD_SCENE(nfc, mf_classic_update_success, MfClassicUpdateSuccess)
ADD_SCENE(nfc, mf_classic_wrong_card, MfClassicWrongCard)
ADD_SCENE(nfc, emv_read_success, EmvReadSuccess)
ADD_SCENE(nfc, emv_menu, EmvMenu)
#if FURI_DEBUG
ADD_SCENE(nfc, emulate_apdu_sequence, EmulateApduSequence)
#endif
ADD_SCENE(nfc, device_info, DeviceInfo)
ADD_SCENE(nfc, delete, Delete)
ADD_SCENE(nfc, delete_success, DeleteSuccess)
ADD_SCENE(nfc, restore_original_confirm, RestoreOriginalConfirm)
ADD_SCENE(nfc, restore_original, RestoreOriginal)
#if FURI_DEBUG
ADD_SCENE(nfc, debug, Debug)
ADD_SCENE(nfc, field, Field)
#endif
ADD_SCENE(nfc, dict_not_found, DictNotFound)
ADD_SCENE(nfc, rpc, Rpc)
ADD_SCENE(nfc, exit_confirm, ExitConfirm)
ADD_SCENE(nfc, retry_confirm, RetryConfirm)
ADD_SCENE(nfc, detect_reader, DetectReader)
ADD_SCENE(nfc, mfkey_nonces_info, MfkeyNoncesInfo)
ADD_SCENE(nfc, mfkey_complete, MfkeyComplete)
ADD_SCENE(nfc, nfc_data_info, NfcDataInfo)
ADD_SCENE(nfc, read_card_type, ReadCardType)
