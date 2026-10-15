/*
 * FUN_10041c4b at 10041c4b
 * int __stdcall FUN_10041c4b(int param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, byte param_8)
 * Address ranges: 10041c4b-10041f8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10041c4b(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int param_7,byte param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort in_FPUControlWord;
  int local_c8 [45];
  uint local_14;
  uint *local_10;
  undefined4 *local_c;
  uint local_8;
  
  BVar6 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar6 == 0) {
    FUN_1003c603();
  }
  uVar3 = MXCSR;
  local_10 = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar9 = -0x7ff8ffa9;
  if (param_2 == 0) {
    MXCSR = uVar3;
    if (((((param_3 & 0xfffffbf2) == 0) && (param_4 < *(uint *)(param_1 + 0x78))) &&
        (param_4 + param_5 <= *(uint *)(param_1 + 0x78))) &&
       ((iVar9 = -0x7789f7f4, *(char *)(param_1 + 0x134) == '\0' || (param_8 != 0)))) {
      iVar9 = -0x7789fe52;
      LOCK();
      piVar1 = (int *)(param_1 + 0x1c);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((iVar2 == 0) || (*(int *)(param_1 + 0xc) != 0)) {
        iVar9 = 0;
        MXCSR = 0x3fc0;
        FUN_10009dc3(local_c,*(int *)(param_1 + 4),param_1 + 0x7c,
                     (param_3 >> 7 & 8 | param_3 & 4) >> 1 | param_3 & 9,param_4,param_5);
        LOCK();
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        UNLOCK();
        MXCSR = uVar3;
      }
    }
    goto LAB_10041f61;
  }
  local_8 = param_3;
  MXCSR = uVar3;
  if (((param_3 & 0xfffffbf3) != 1) ||
     ((((param_7 != 0 && ((param_8 != 0 || (param_7 != 1)))) ||
       (*(uint *)(param_2 + 0x78) <= param_6)) ||
      ((((*(uint *)(param_2 + 0x78) < param_6 + param_5 || (*(uint *)(param_1 + 0x78) <= param_4))
        || (*(uint *)(param_1 + 0x78) < param_4 + param_5)) ||
       ((iVar9 = -0x7789f800, (*(byte *)(param_2 + 0x7c) & 2) == 0 ||
        ((*(byte *)(param_1 + 0x7c) & 4) == 0)))))))) goto LAB_10041f61;
  FUN_1000901e(param_2 + 0x7c,*(int *)(param_2 + 4),local_c8);
  iVar9 = FUN_1003dc4a(local_c,(int)local_c8,param_1 + 0x7c);
  puVar4 = local_c;
  if ((iVar9 < 0) || ((iVar9 = -0x7789f7f4, *(char *)(param_1 + 0x134) != '\0' && (param_8 == 0))))
  goto LAB_10041f61;
  iVar9 = -0x7789fe52;
  LOCK();
  piVar1 = (int *)(param_1 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 == 0) || (*(int *)(param_1 + 0xc) != 0)) {
    LOCK();
    piVar1 = (int *)(param_2 + 0x1c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (((iVar2 == 0) || (*(int *)(param_2 + 0xc) != 0)) &&
       ((iVar9 = -0x7ff8ffa9, (~*(byte *)(param_1 + 0x70) & 1) != 0 || ((param_3 & 4) == 0)))) {
      iVar9 = 0;
      if (param_8 != 0) {
        if (*(char *)(local_c[0x547] + 0xd0) == '\0') {
          iVar9 = -0x7789fcfb;
          goto LAB_10041eb5;
        }
        FUN_1003dd9f(local_c);
        bVar5 = FUN_1003e15a((int)puVar4);
        if (!bVar5) {
          param_3 = param_3 & 0xfffffbff;
          local_8 = param_3;
        }
      }
      uVar3 = MXCSR;
      MXCSR = 0x3fc0;
      FUN_1000964d(local_c,local_c8,*(int *)(param_1 + 4),param_1 + 0x7c,
                   (param_3 >> 7 & 8 | param_3 & 4) >> 1 | param_3 & 9,param_4,param_5,param_6,
                   (byte)param_7 & 1,param_8);
      uVar8 = *(int *)(param_1 + 0x88) * param_4;
      uVar7 = (param_5 + param_4) * *(int *)(param_1 + 0x88);
      if (uVar8 < *(uint *)(param_1 + 0x14)) {
        *(uint *)(param_1 + 0x14) = uVar8;
      }
      if ((*(uint *)(param_1 + 0x18) < uVar7) &&
         (*(uint *)(param_1 + 0x18) = uVar7,
         *(uint *)(param_1 + 0x10) <= uVar7 && uVar7 - *(uint *)(param_1 + 0x10) != 0)) {
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
      }
      MXCSR = uVar3;
      if ((local_8 & 4) != 0) {
        *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) | ~*(byte *)(param_1 + 0x70) & 1;
      }
    }
LAB_10041eb5:
    LOCK();
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    UNLOCK();
  }
  LOCK();
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  UNLOCK();
LAB_10041f61:
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar9;
}

