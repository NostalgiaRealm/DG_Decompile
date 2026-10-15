/*
 * FUN_1004a237 at 1004a237
 * int __stdcall FUN_1004a237(byte * param_1, byte * param_2, int * param_3, int * param_4, int * param_5, int * param_6, uint * param_7)
 * Address ranges: 1004a237-1004a524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004a237(byte *param_1,byte *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                uint *param_7)

{
  char cVar1;
  BOOL BVar2;
  void *this;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  ushort in_FPUControlWord;
  int local_28 [4];
  uint local_18;
  int local_14;
  uint *local_10;
  undefined4 *local_c;
  int local_8;
  
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar2 == 0) {
    FUN_1003c603();
  }
  if (param_6 != (int *)0x0) {
    *param_6 = 0;
  }
  iVar8 = -0x7789ff7e;
  if (param_4 != (int *)0x0) {
    local_14 = (**(code **)(*param_4 + 0x38))();
    iVar8 = -0x7789ff9c;
    if ((*(uint *)(local_14 + 0x68) & 0x2001) != 0) {
      local_28[0] = 0;
      iVar8 = -0x7ff8ffa9;
      iVar6 = 0;
      local_28[1] = 0;
      local_28[2] = 0;
      local_28[3] = 0;
      do {
        if (*(int *)(param_2 + iVar6 * 4) != local_28[iVar6]) {
          uVar9 = 0;
          local_10 = (uint *)(&PTR_DAT_1005dcec)[*(int *)(local_8 + 0x98)];
          do {
            iVar8 = FUN_1005c99d(param_1,(byte *)&DAT_1005d1b0,0x10);
            local_c = (undefined4 *)(uVar9 * 0x298);
            puVar7 = (uint *)((int)local_c + (int)local_10);
            if (iVar8 == 0) {
              puVar7 = puVar7 + 4;
            }
            iVar8 = FUN_1005c99d(param_2,(byte *)puVar7,0x10);
            piVar4 = param_4;
            puVar10 = (undefined *)0x0;
            if (iVar8 == 0) {
              puVar10 = (&PTR_DAT_1005dcec)[*(int *)(local_8 + 0x98)] + (int)local_c;
            }
          } while ((puVar10 == (undefined *)0x0) && (uVar9 = uVar9 + 1, uVar9 < 7));
          iVar8 = -0x7fffbffe;
          if ((param_6 == (int *)0x0) || (puVar10 == (undefined *)0x0)) break;
          local_10 = &local_18;
          local_c = (undefined4 *)CONCAT22(local_c._2_2_,in_FPUControlWord);
          local_18 = in_FPUControlWord | 0x80000000;
          if ((in_FPUControlWord & 0xf3f) != 0x23f) {
            local_18 = (uint)in_FPUControlWord;
            local_c = (undefined4 *)(in_FPUControlWord & 0xf0ff | 0x23f);
            in_FPUControlWord = (ushort)local_c;
          }
          this = (void *)(**(code **)(*param_4 + 0x18))();
          if (this == (void *)0x0) {
LAB_1004a3c1:
            iVar8 = -0x7fffbffb;
            local_c = (undefined4 *)(local_8 + 0x90);
            piVar3 = (int *)0x0;
            if ((char)param_7 != '\0') {
              piVar3 = piVar4;
            }
            piVar4 = FUN_1003c9d4((undefined4 *)param_1,(int *)*local_c,piVar3,param_3,(int)puVar10,
                                  *(undefined4 *)(local_14 + 0xc),*(undefined4 *)(local_14 + 8));
            puVar5 = local_c;
            param_3 = piVar4;
            if (piVar4 != (int *)0x0) {
              iVar8 = FUN_1003ed48(piVar4,(uint)param_2);
              piVar3 = param_6;
              if (-1 < iVar8) {
                iVar8 = FUN_1003eaee(piVar4,(int)param_1,param_6);
                if (iVar8 < 0) {
LAB_1004a47d:
                  if (piVar4 != (int *)0x0) {
                    FUN_1003f218(piVar4);
                  }
                }
                else {
                  if ((char)param_7 == '\0') {
                    iVar8 = FUN_1004058c(piVar4,param_4,param_5,0,'\x01');
                  }
                  else {
                    (**(code **)(*param_4 + 0x1c))(piVar4);
                  }
                  if (iVar8 < 0) {
                    piVar4 = (int *)*piVar3;
                    (**(code **)(*piVar4 + 8))(piVar4);
                    piVar4 = (int *)0x0;
                    *piVar3 = 0;
                    param_3 = (int *)0x0;
                    if (iVar8 < 0) goto LAB_1004a47d;
                  }
                  FUN_10008155((void *)(local_8 + 0x9c),&param_3);
                  piVar4 = param_3;
                }
                puVar5 = local_c;
                if (-1 < iVar8) goto LAB_1004a4a7;
              }
              if (piVar4 != (int *)0x0) {
                (**(code **)(*piVar4 + 4))(1);
                puVar5 = local_c;
              }
            }
          }
          else {
            iVar8 = 0;
            do {
              piVar4 = param_4;
              if (*(int *)(param_1 + iVar8 * 4) != (&DAT_1005d180)[iVar8]) goto LAB_1004a3c1;
              iVar8 = iVar8 + 1;
            } while (iVar8 != 4);
            iVar8 = FUN_1003eaee(this,(int)param_1,param_6);
            puVar5 = (undefined4 *)(local_8 + 0x90);
          }
LAB_1004a4a7:
          param_7 = &local_18;
          if ((local_18 & 0x80000000) == 0) {
            in_FPUControlWord = (ushort)local_18;
          }
          if (-1 < iVar8) {
            cVar1 = (**(code **)(*(int *)*puVar5 + 0x30))();
            if (cVar1 == '\0') {
              cVar1 = (**(code **)(*(int *)*puVar5 + 0x40))();
              if (cVar1 == '\0') {
                param_7 = (uint *)(CONCAT22(param_7._2_2_,in_FPUControlWord) & 0xfffff0ff | 0x3f);
              }
            }
            else {
              cVar1 = (**(code **)(*(int *)*puVar5 + 0x3c))();
              if (cVar1 != '\0') {
                param_7 = (uint *)(CONCAT22(param_7._2_2_,in_FPUControlWord) & 0xfffff0ff | 0x3f);
              }
            }
          }
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 4);
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar8;
}

