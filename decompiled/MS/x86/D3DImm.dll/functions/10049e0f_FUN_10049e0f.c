/*
 * FUN_10049e0f at 10049e0f
 * int __thiscall FUN_10049e0f(void * this, undefined4 param_1, uint * param_2, int param_3)
 * Address ranges: 10049e0f-10049f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10049e0f(void *this,undefined4 param_1,uint *param_2,int param_3)

{
  uint *puVar1;
  BOOL BVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  bool bVar6;
  ushort in_FPUControlWord;
  uint local_14;
  void *local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = this;
  BVar2 = TryEnterCriticalSection(DAT_1006bbd0);
  uVar4 = extraout_ECX;
  if (BVar2 == 0) {
    FUN_1003c603();
    uVar4 = extraout_ECX_00;
  }
  puVar1 = param_2;
  local_c = &local_14;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar5 = -0x7ff8ffa9;
  if (param_2 == (uint *)0x0) goto LAB_10049f14;
  iVar5 = -0x7ffbfef0;
  *param_2 = 0;
  if (param_3 != 0) goto LAB_10049f14;
  iVar5 = -0x7ff8fff2;
  puVar3 = FUN_1003ca36(uVar4,*(undefined4 *)((int)this + 0x90));
  if (puVar3 == (uint *)0x0) goto LAB_10049f14;
  param_2 = puVar3;
  iVar5 = FUN_1004a963((int)puVar3);
  bVar6 = iVar5 < 0;
  if (iVar5 == 0) {
    iVar5 = FUN_1004a8fb((int)puVar3,0x1005d1e0,puVar1);
    if (-1 < iVar5) {
      iVar5 = -0x7ff8fff2;
      uVar4 = FUN_10008155((void *)((int)local_10 + 0xb4),&param_2);
      if ((char)uVar4 != '\0') {
        iVar5 = 0;
        goto LAB_10049f14;
      }
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      puVar3 = (uint *)0x0;
      *puVar1 = 0;
      bVar6 = true;
      goto LAB_10049efb;
    }
  }
  else {
LAB_10049efb:
    if (!bVar6) goto LAB_10049f14;
  }
  if (puVar3 != (uint *)0x0) {
    *puVar3 = (uint)&PTR_FUN_1005f568;
    FUN_1005c76c(puVar3);
  }
LAB_10049f14:
  param_2 = &local_14;
  LeaveCriticalSection(DAT_1006bbd0);
  return iVar5;
}

