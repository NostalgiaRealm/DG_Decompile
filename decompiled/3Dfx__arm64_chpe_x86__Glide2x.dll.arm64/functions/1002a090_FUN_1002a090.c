/*
 * FUN_1002a090 at 1002a090
 * undefined FUN_1002a090(void)
 * Address ranges: 1002a090-1002a3e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002a090(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar9;
  uint local_64;
  undefined1 auStack_60 [20];
  uint local_4c;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  if ((*(char *)(param_1 + 0x124) != '\0') || (*(char *)(param_1 + 0x125) != '\0')) {
    (*pcVar5)();
    (*extraout_w11_00)(param_1,1,1);
  }
  uVar9 = 0;
  do {
    (*pcVar5)();
    iVar6 = (*extraout_w11_01)(param_1,uVar9);
    uVar4 = *(uint *)(iVar6 + 0x54);
    if (uVar4 <= param_2) {
      iVar7 = 4;
      if (*(char *)(iVar6 + 0x7c) == '\0') {
        iVar7 = 2;
      }
      if (param_2 < uVar4 + iVar7 * *(int *)(*(int *)(param_1 + 4) + 0x9c) * *(int *)(iVar6 + 0x58))
      {
        param_2 = param_2 - uVar4;
        uVar3 = param_2 & 0xffff8000;
        if ((*(char *)(iVar6 + 0x81) != '\0') &&
           (iVar7 = (*(code *)PTR_FUN_1009d0fc)(uVar4,auStack_60,0x1c), iVar7 != 0)) {
          (*(code *)PTR_FUN_1009d0f8)
                    (uVar3 + *(uint *)(iVar6 + 0x54),0x8000,local_4c & 0xfffffeff,&local_64);
        }
        uVar8 = (*pcVar5)();
        (*extraout_w11_02)(uVar8,0,0);
        pbVar2 = (byte *)(iVar6 + 0x82);
        if ((*pbVar2 >> 1 & 1) != 0) {
          FUN_10034cc8(iVar6);
        }
        local_64 = param_2 >> 0x14;
        if ((*(byte *)((param_2 >> 0x12 & 3) + iVar6 + (local_64 + 0x21) * 4) >>
             (ulonglong)(param_2 >> 0xf & 7) & 1) == 0) {
          FUN_10034938(uVar3,uVar3 + 0x8000,*(undefined4 *)(iVar6 + 0x20),
                       *(undefined4 *)(iVar6 + 0x24));
          (*pcVar5)();
          (*extraout_w11_03)(param_1,uVar9,0);
          pbVar1 = (byte *)((param_2 >> 0x12 & 3) + iVar6 + (local_64 + 0x21) * 4);
          *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 >> 0xf & 7));
        }
        *pbVar2 = *pbVar2 & 0xfc | 1;
        return 1;
      }
    }
    uVar9 = uVar9 + 1;
    if (2 < uVar9) {
      return 0;
    }
  } while( true );
}

