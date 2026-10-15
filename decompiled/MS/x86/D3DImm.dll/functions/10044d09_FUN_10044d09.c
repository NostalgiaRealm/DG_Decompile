/*
 * FUN_10044d09 at 10044d09
 * undefined4 __thiscall FUN_10044d09(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10044d09-10044f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10044d09(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ushort in_FPUControlWord;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  uVar8 = 0x80070057;
  if (((*(char *)((int)this + 0x1750) == '\0') ||
      (local_c = 0, uVar8 = local_c, *(int *)((int)this + 0x1748) != 0)) ||
     (*(char *)((int)this + 0x1751) == '\0')) goto LAB_10044f82;
  uVar4 = *(uint *)((int)this + 0x1740);
  if ((*(int *)((int)this + 0x1738) - 4U <= uVar4) && (uVar4 % *(uint *)((int)this + 0x1680) == 0))
  {
    uVar5 = *(uint *)((int)this + 0x1734);
    local_1c = CONCAT31(local_1c._1_3_,~(byte)(uVar5 >> 2)) & 0xffffff01;
    local_20 = CONCAT31(local_20._1_3_,~(byte)(uVar5 >> 4)) & 0xffffff01;
    local_18 = *(int *)((int)this + 0x1674);
    local_10 = *(int *)((int)this + 0x1678);
    local_24 = CONCAT31(local_24._1_3_,~(byte)(uVar5 >> 3)) & 0xffffff01;
    BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar3 == 0) {
      FUN_1003c603();
    }
    local_14 = &local_28;
    local_8 = (uint)in_FPUControlWord;
    local_28 = local_8 | 0x80000000;
    if ((local_8 & 0xf3f) != 0x23f) {
      local_28 = local_8;
    }
    local_8 = 2;
    if ((((local_18 != 0) && (uVar4 < 0x10000)) && ((local_10 - 1U < 6 || (param_2 == 2)))) &&
       ((*(int *)((int)this + 0x1688) != 3 && (local_10 - 1U < 6)))) {
      iVar1 = *(int *)((int)this + 0x18);
      iVar2 = *(int *)((int)this + 0x28);
      if (((iVar1 == 0) || (*(char *)(iVar1 + 9) == '\0')) &&
         ((((iVar2 == 0 || (*(char *)(iVar2 + 9) == '\0')) &&
           ((iVar1 == 0 || (*(char *)(iVar1 + 8) == '\0')))) &&
          ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))))) {
        FUN_10042e08(this,local_10,(int)this + 0x1684,local_18,uVar4,0,0,param_2,(char)local_24,
                     (byte)local_20,(char)local_1c);
      }
    }
    LeaveCriticalSection(DAT_1006bbd0);
    iVar1 = *(int *)((int)this + 0x1678);
    if (iVar1 == 3) {
      puVar6 = (undefined4 *)
               ((*(int *)((int)this + 0x1740) + -1) * *(uint *)((int)this + 0x1690) +
               (int)*(undefined4 **)((int)this + 0x1674));
      puVar7 = *(undefined4 **)((int)this + 0x1674);
      for (uVar4 = *(uint *)((int)this + 0x1690) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)((int)this + 0x1740) = 1;
      uVar4 = 1;
    }
    else {
      if (iVar1 == 5) {
        uVar5 = (*(uint *)((int)this + 0x1690) & 0x7fffffff) >> 1;
        puVar7 = (undefined4 *)
                 ((*(int *)((int)this + 0x1740) - local_8) * *(uint *)((int)this + 0x1690) +
                 (int)*(undefined4 **)((int)this + 0x1674));
        puVar6 = *(undefined4 **)((int)this + 0x1674);
      }
      else {
        if (iVar1 != 6) {
          *(undefined4 *)((int)this + 0x1740) = 0;
          uVar4 = 0;
          goto LAB_10044f58;
        }
        uVar4 = *(uint *)((int)this + 0x1690);
        uVar5 = uVar4 >> 2;
        puVar6 = (undefined4 *)(uVar4 + *(int *)((int)this + 0x1674));
        puVar7 = (undefined4 *)
                 ((*(int *)((int)this + 0x1740) + -1) * uVar4 + *(int *)((int)this + 0x1674));
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar6 = puVar6 + 1;
      }
      *(uint *)((int)this + 0x1740) = local_8;
      uVar4 = local_8;
    }
  }
LAB_10044f58:
  puVar6 = (undefined4 *)(uVar4 * *(uint *)((int)this + 0x1690) + *(int *)((int)this + 0x1674));
  for (uVar5 = *(uint *)((int)this + 0x1690) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  *(int *)((int)this + 0x1740) = *(int *)((int)this + 0x1740) + 1;
  *(int *)((int)this + 0x1744) = *(int *)((int)this + 0x1744) + 1;
  uVar8 = local_c;
LAB_10044f82:
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar8;
}

