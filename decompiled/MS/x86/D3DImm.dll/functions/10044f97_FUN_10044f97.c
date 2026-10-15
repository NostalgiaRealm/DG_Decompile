/*
 * FUN_10044f97 at 10044f97
 * undefined4 __thiscall FUN_10044f97(void * this, undefined2 param_1, uint param_2)
 * Address ranges: 10044f97-100451d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10044f97(void *this,undefined2 param_1,uint param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  ushort in_FPUControlWord;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  BVar5 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar5 == 0) {
    FUN_1003c603();
  }
  uVar6 = 0x80070057;
  if (*(char *)((int)this + 0x1750) == '\0') goto LAB_100451c1;
  local_2c = *(int *)((int)this + 0x1748);
  local_10 = 0;
  if (local_2c == 0) {
    uVar6 = 0;
    goto LAB_100451c1;
  }
  uVar6 = local_10;
  if (*(char *)((int)this + 0x1751) == '\0') goto LAB_100451c1;
  local_18 = *(uint *)((int)this + 0x1740);
  puVar1 = *(undefined2 **)((int)this + 0x1674);
  if ((*(int *)((int)this + 0x1738) - 4U <= local_18) &&
     (local_18 % *(uint *)((int)this + 0x1680) == 0)) {
    uVar2 = *(uint *)((int)this + 0x1734);
    local_1c = CONCAT31(local_1c._1_3_,~(byte)(uVar2 >> 2)) & 0xffffff01;
    local_20 = CONCAT31(local_20._1_3_,~(byte)(uVar2 >> 4)) & 0xffffff01;
    local_28 = *(uint *)((int)this + 0x174c);
    local_c = *(int *)((int)this + 0x1678);
    local_24 = CONCAT31(local_24._1_3_,~(byte)(uVar2 >> 3)) & 0xffffff01;
    BVar5 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar5 == 0) {
      FUN_1003c603();
    }
    local_14 = &local_30;
    local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
    local_30 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_30 = (uint)in_FPUControlWord;
      local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    if ((((puVar1 != (undefined2 *)0x0) && (local_18 < 0x10000)) &&
        ((local_c - 1U < 6 || (param_2 == 2)))) &&
       ((*(int *)((int)this + 0x1688) != 3 && (local_c - 1U < 6)))) {
      iVar3 = *(int *)((int)this + 0x18);
      iVar4 = *(int *)((int)this + 0x28);
      if (((iVar3 == 0) || (*(char *)(iVar3 + 9) == '\0')) &&
         ((((iVar4 == 0 || (*(char *)(iVar4 + 9) == '\0')) &&
           ((iVar3 == 0 || (*(char *)(iVar3 + 8) == '\0')))) &&
          ((iVar4 == 0 || (*(char *)(iVar4 + 8) == '\0')))))) {
        FUN_10042e08(this,local_c,(int)this + 0x1684,local_2c,local_28,(int)puVar1,local_18,param_2,
                     (char)local_24,(byte)local_20,(char)local_1c);
      }
    }
    LeaveCriticalSection(DAT_1006bbd0);
    iVar3 = *(int *)((int)this + 0x1678);
    if (iVar3 == 3) {
      *puVar1 = puVar1[*(int *)((int)this + 0x1740) + -1];
      *(undefined4 *)((int)this + 0x1740) = 1;
    }
    else {
      if (iVar3 == 5) {
        *puVar1 = puVar1[*(int *)((int)this + 0x1740) + -2];
      }
      else if (iVar3 != 6) goto LAB_100451a0;
      puVar1[1] = puVar1[*(int *)((int)this + 0x1740) + -1];
      *(undefined4 *)((int)this + 0x1740) = 2;
    }
  }
LAB_100451a0:
  puVar1[*(int *)((int)this + 0x1740)] = param_1;
  *(int *)((int)this + 0x1740) = *(int *)((int)this + 0x1740) + 1;
  *(int *)((int)this + 0x1744) = *(int *)((int)this + 0x1744) + 1;
  uVar6 = local_10;
LAB_100451c1:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar6;
}

