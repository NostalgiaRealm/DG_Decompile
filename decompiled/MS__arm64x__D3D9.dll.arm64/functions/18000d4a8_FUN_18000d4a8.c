/*
 * FUN_18000d4a8 at 18000d4a8
 * undefined FUN_18000d4a8(void)
 * Address ranges: 18000d4a8-18000d513
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000d4a8(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  code *pcVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar1 = *(char *)(param_1 + 0xf9) == '\0';
  if (bVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x68))
              (*(longlong **)(param_1 + 0x80),&local_30,*(undefined8 *)(param_1 + 0x88));
    pcVar2 = __imp_USER32_dll_SetRect;
    param_2[1] = uStack_28;
    *param_2 = local_30;
    param_2[3] = uStack_18;
    param_2[2] = uStack_20;
    (*pcVar2)(param_2 + 4,0,0,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  return bVar1;
}

