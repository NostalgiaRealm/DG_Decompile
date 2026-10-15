/*
 * FUN_10067840 at 10067840
 * undefined FUN_10067840(void)
 * Address ranges: 10067840-100679db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10067840(int param_1,undefined4 param_2)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  ulonglong extraout_x11;
  uint uVar6;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  
  local_4c = FUN_10067e20(param_1,param_2);
  uVar5 = extraout_x11;
  if (local_4c != -1) {
    puVar1 = (uint *)(param_1 + (local_4c + 0xd8) * 4);
    if (*puVar1 == 0xffffffff) {
      *puVar1 = 0;
      uVar5 = FUN_10070a50(*(undefined4 *)(param_1 + 0x3a8),param_2,*(undefined4 *)(param_1 + 0x3ac)
                           ,*(undefined4 *)(param_1 + 0x3b4),*(undefined4 *)(param_1 + 0x3b0),
                           *(undefined1 *)(param_1 + 0x3b8));
      pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if ((uVar5 & 1) != 0) {
        uVar6 = 2;
        local_48 = param_2;
        local_44 = (undefined4 *)(param_1 + 0x3a8);
        do {
          uVar3 = (*pcVar2)();
          iVar4 = (*extraout_w11)(uVar3,0x1c,uVar6,&local_50);
          if ((iVar4 == 0) && (local_50 != 0)) {
            uVar3 = (*pcVar2)();
            iVar4 = (*extraout_w11_00)(uVar3,0x39,uVar6,&local_50);
            if ((iVar4 == 0) && (local_50 != 0)) {
              *(char *)(local_4c + (*puVar1 + 0x26) * 0x10 + param_1) = (char)uVar6;
              *puVar1 = *puVar1 + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x21);
        FUN_10071158(*local_44,local_48);
      }
    }
    uVar5 = (ulonglong)*puVar1;
  }
  return uVar5 & 0xffffffff;
}

