/*
 * FUN_1001a7a0 at 1001a7a0
 * undefined FUN_1001a7a0(void)
 * Address ranges: 1001a7a0-1001aacf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001a7a0(int param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar8;
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
  uVar8 = 0;
  do {
    (*pcVar5)();
    iVar6 = (*extraout_w11_01)(param_1,uVar8);
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
           (iVar7 = (*(code *)PTR_FUN_100a00fc)(uVar4,auStack_60,0x1c), iVar7 != 0)) {
          (*(code *)PTR_FUN_100a00f8)
                    (uVar3 + *(uint *)(iVar6 + 0x54),0x8000,local_4c & 0xfffffeff,&local_64);
        }
        FUN_10018e60(*(undefined4 *)(*(int *)(param_1 + 4) + 0x32e0));
        pbVar2 = (byte *)(iVar6 + 0x82);
        if ((*pbVar2 >> 1 & 1) != 0) {
          FUN_10023e18(iVar6);
        }
        local_64 = param_2 >> 0x14;
        if ((*(byte *)((param_2 >> 0x12 & 3) + iVar6 + (local_64 + 0x21) * 4) >>
             (ulonglong)(param_2 >> 0xf & 7) & 1) == 0) {
          FUN_10023a58(uVar3,uVar3 + 0x8000,*(undefined4 *)(iVar6 + 0x20),
                       *(undefined4 *)(iVar6 + 0x24));
          (*pcVar5)();
          (*extraout_w11_02)(param_1,uVar8,0);
          pbVar1 = (byte *)((param_2 >> 0x12 & 3) + iVar6 + (local_64 + 0x21) * 4);
          *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 >> 0xf & 7));
        }
        *pbVar2 = *pbVar2 & 0xfc | 1;
        return 1;
      }
    }
    uVar8 = uVar8 + 1;
    if (6 < uVar8) {
      return 0;
    }
  } while( true );
}

