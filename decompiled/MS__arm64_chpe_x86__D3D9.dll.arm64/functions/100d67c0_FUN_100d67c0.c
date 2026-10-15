/*
 * FUN_100d67c0 at 100d67c0
 * undefined FUN_100d67c0(void)
 * Address ranges: 100d67c0-100d6a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d67c0(int param_1,int param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *extraout_w8;
  code *extraout_w11;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 auStack_60 [2];
  undefined1 auStack_50 [16];
  
  iVar1 = -0x7789f794;
  iVar4 = -0x7789f794;
  if (param_2 != 0) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar4 == 0) {
        FUN_100071d0(0);
      }
    }
    uVar7 = FUN_100038a0(*(undefined4 *)(param_2 + -0x34));
    iVar4 = iVar1;
    if (((uVar7 & 1) == 0) && (iVar4 = 0, *(int *)(param_2 + -0x28) != 0)) {
      iVar4 = iVar1;
    }
    (*(code *)PTR_FUN_1016c26c)
              (auStack_60,0,0,*(undefined4 *)(param_2 + -0x1c),*(undefined4 *)(param_2 + -0x18));
    if (param_3 == (undefined8 *)0x0) {
      param_3 = auStack_60;
    }
    uStack_68 = param_3[1];
    local_70 = *param_3;
    (*(code *)PTR_FUN_1016c208)(auStack_50,&local_70,auStack_60);
    if (-1 < iVar4) {
      iVar5 = (*(code *)PTR_FUN_1016c1a4)(auStack_50,&local_70);
      if (iVar5 == 0) {
        iVar4 = iVar1;
      }
      if (-1 < iVar4) {
        iVar5 = *(int *)(param_2 + -0x58);
        if ((*(uint *)(iVar5 + 0xb8) >> 0xb & 1) != 0) {
          iVar4 = iVar1;
        }
        if ((-1 < iVar4) && (*(char *)(param_1 + -0x17) == '\0')) {
          FUN_1001d710(param_2 + -0x5c,0);
          puVar9 = (undefined4 *)(iVar5 + 0x70);
          puVar8 = (undefined4 *)(*(int *)(param_2 + -0x58) + 0x50);
          uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                            ((float)(int)local_70,(float)local_70._4_4_,(float)(int)uStack_68,
                             (float)uStack_68._4_4_);
          cVar3 = (*extraout_w11)(uVar6,*extraout_w8,*puVar9,*puVar8,param_4);
          if (cVar3 == '\0') {
            iVar4 = -0x7789f7d9;
          }
          FUN_1001d7e0(param_2 + -0x5c);
        }
      }
    }
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return iVar4;
}

