/*
 * FUN_10050bd0 at 10050bd0
 * undefined FUN_10050bd0(void)
 * Address ranges: 10050bd0-10050ddb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10050bd0(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint *param_6,
                 char param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined4 local_16c;
  undefined4 uStack_168;
  uint local_164;
  uint uStack_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  
  if (param_4 != 0) {
    auVar14 = NEON_fmov(0x3e400000,4);
    uStack_160 = 0;
    local_150 = CONCAT44(0x3f000000,auVar14._0_4_);
    uStack_148 = 0x3ea00000;
    local_164 = param_4;
    do {
      uVar12 = 0;
      iVar13 = param_1 + uStack_160 * param_2;
      puVar11 = (undefined2 *)(param_8 + (uStack_160 * param_9 >> 2));
      uVar1 = 4;
      if (local_164 - uStack_160 < 5) {
        uVar1 = local_164 - uStack_160;
      }
      uVar10 = (ulonglong)uVar1;
      if (param_3 != 0) {
        do {
          uVar2 = 4;
          if (param_3 - uVar12 < 5) {
            uVar2 = param_3 - uVar12;
          }
          if ((param_7 == '\0') && (param_6 == (uint *)0x0)) {
            if (uVar1 != 0) {
              FUN_100917d0(puVar11,0xffff,uVar10 << 1);
            }
          }
          else {
            uVar5 = 0;
            iVar3 = iVar13;
            puVar4 = puVar11;
            if (uVar1 != 0) {
              do {
                uVar9 = 0;
                uVar8 = 0;
                uVar7 = 0;
                if (uVar2 != 0) {
                  do {
                    uVar6 = *(uint *)(uVar7 * 4 + iVar3);
                    if ((param_6 == (uint *)0x0) || ((uVar6 & param_6[1]) != *param_6)) {
                      if (param_5 < 2) {
                        uVar6 = uVar6 >> 0x18;
                      }
                      uVar9 = (uVar6 >> 4) << (ulonglong)(uVar7 * 4 & 0x1f) | uVar9;
                    }
                    uVar8 = (undefined2)uVar9;
                    uVar7 = uVar7 + 1;
                  } while (uVar7 < uVar2);
                }
                uVar5 = uVar5 + 1;
                *puVar4 = uVar8;
                iVar3 = iVar3 + param_2;
                puVar4 = puVar4 + 1;
              } while (uVar5 < uVar1);
            }
          }
          FUN_100501c8(iVar13,param_2,uVar2,uVar10,param_5,auStack_140);
          FUN_100506b0(local_150,auStack_140,uVar2,uVar10,4,&uStack_168,&local_16c,0);
          FUN_100507c0(auStack_140,uVar2,uVar10,4,uStack_168,local_16c,puVar11 + 4,0);
          uVar12 = uVar12 + 4;
          iVar13 = iVar13 + 0x10;
          puVar11 = puVar11 + 8;
        } while (uVar12 < param_3);
      }
      uStack_160 = uStack_160 + 4;
    } while (uStack_160 < local_164);
  }
  return;
}

