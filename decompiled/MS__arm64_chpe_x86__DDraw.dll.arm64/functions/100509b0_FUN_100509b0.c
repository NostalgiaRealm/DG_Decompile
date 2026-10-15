/*
 * FUN_100509b0 at 100509b0
 * undefined FUN_100509b0(void)
 * Address ranges: 100509b0-10050bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100509b0(int param_1,int param_2,uint param_3,uint param_4,int param_5,uint *param_6,
                 char param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 local_15c;
  undefined4 uStack_158;
  uint local_154;
  uint uStack_150;
  undefined1 auStack_140 [256];
  
  if (param_4 != 0) {
    NEON_fmov(0x3e400000,4);
    uStack_150 = 0;
    do {
      uVar9 = 0;
      iVar10 = param_1 + uStack_150 * param_2;
      iVar11 = param_8 + (uStack_150 * param_9 >> 2);
      uVar1 = 4;
      if (param_4 - uStack_150 < 5) {
        uVar1 = param_4 - uStack_150;
      }
      local_154 = param_4;
      if (param_3 != 0) {
        do {
          uVar2 = 4;
          if (param_3 - uVar9 < 5) {
            uVar2 = param_3 - uVar9;
          }
          uVar8 = 0;
          if ((param_7 != '\0') || (param_6 != (uint *)0x0)) {
            uVar4 = 1;
            uVar6 = 0;
            iVar3 = iVar10;
            if (uVar1 != 0) {
              do {
                uVar7 = 0;
                if (uVar2 != 0) {
                  do {
                    if (((param_7 != '\0') &&
                        ((*(uint *)(iVar3 + uVar7 * 4) & *(uint *)(&DAT_100b3e80 + param_5 * 4)) >>
                         (ulonglong)(*(byte *)(param_5 + 0x100b3e78) & 0x1f) < 0x80)) ||
                       ((param_6 != (uint *)0x0 &&
                        ((*(uint *)(iVar3 + uVar7 * 4) & param_6[1]) == *param_6)))) {
                      uVar8 = uVar4 | uVar8;
                    }
                    uVar7 = uVar7 + 1;
                    uVar4 = uVar4 << 1;
                  } while (uVar7 < uVar2);
                }
                uVar6 = uVar6 + 1;
                iVar3 = iVar3 + param_2;
              } while (uVar6 < uVar1);
            }
          }
          FUN_100501c8(iVar10,param_2,uVar2,uVar1,param_5,auStack_140);
          uVar5 = 3;
          if (uVar8 == 0) {
            uVar5 = 4;
          }
          FUN_100506b0(auStack_140,uVar2,uVar1,uVar5,&uStack_158,&local_15c,uVar8);
          FUN_100507c0(auStack_140,uVar2,uVar1,uVar5,uStack_158,local_15c,iVar11,uVar8);
          uVar9 = uVar9 + 4;
          iVar10 = iVar10 + 0x10;
          iVar11 = iVar11 + 8;
          param_4 = local_154;
        } while (uVar9 < param_3);
      }
      uStack_150 = uStack_150 + 4;
    } while (uStack_150 < param_4);
  }
  return;
}

