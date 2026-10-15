/*
 * FUN_180023f18 at 180023f18
 * undefined FUN_180023f18(void)
 * Address ranges: 180023f18-1800240b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180023f18(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_480 [12];
  undefined4 local_474;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 local_430;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if ((lVar4 == 0) || ((*(int *)(param_1 + 0x40) == 8 && ((param_5 & 1) != 0)))) {
    uStack_458 = 0;
    local_460 = 0;
    uStack_448 = 0;
    local_450 = 0;
    local_440 = 0;
    if (*(int *)(param_1 + 0x40) == 8) {
      local_438 = 0;
      if (lVar4 != 0) {
        uVar1 = (*__imp_GDI32_dll_CreateCompatibleDC)(0);
        uVar2 = (*__imp_GDI32_dll_SelectObject)(uVar1,*(undefined8 *)(param_1 + 0x50));
        (*__imp_GDI32_dll_SetDIBColorTable)(uVar1,0,0x100,&local_438);
        (*__imp_GDI32_dll_SelectObject)(uVar1,uVar2);
        (*__imp_GDI32_dll_DeleteDC)(uVar1);
        lVar4 = *(longlong *)(param_1 + 0x50);
      }
    }
    else {
      local_438 = *(undefined4 *)(param_1 + 0x44);
      uStack_434 = *(undefined4 *)(param_1 + 0x48);
      local_430 = *(undefined4 *)(param_1 + 0x4c);
    }
    if (lVar4 == 0) {
      local_460 = CONCAT44(*(undefined4 *)(param_1 + 0x24),0x28);
      uStack_458 = CONCAT26((short)*(int *)(param_1 + 0x40),CONCAT24(1,-*(int *)(param_1 + 0x28)));
      uVar3 = 0;
      if ((*(int *)(param_1 + 0x40) - 0x10U & 0xffffffef) == 0) {
        uVar3 = 3;
      }
      local_450 = CONCAT44(local_450._4_4_,uVar3);
      lVar4 = (*__imp_GDI32_dll_CreateDIBSection)(0,&local_460,0,param_1 + 0x78,param_2,param_3);
      *(longlong *)(param_1 + 0x50) = lVar4;
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        (*__imp_GDI32_dll_GetObjectW)(lVar4,0x20,auStack_480);
        *(undefined4 *)(param_1 + 0x80) = local_474;
        *(bool *)(param_1 + 0x84) = param_2 != 0;
        lVar4 = *(longlong *)(param_1 + 0x50);
      }
      *(undefined2 *)(param_1 + 0x85) = 0;
    }
  }
  return lVar4 != 0;
}

