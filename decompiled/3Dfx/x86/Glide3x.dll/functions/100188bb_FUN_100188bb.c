/*
 * FUN_100188bb at 100188bb
 * undefined __thiscall FUN_100188bb(void * this, undefined4 * param_1)
 * Address ranges: 100188bb-100189a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100188bb(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_1b8;
  void *local_8;
  
  local_8 = this;
  FUN_1001416a((int)this + 0x35c0);
  iVar4 = *(int *)((int)this + 0x3308);
  puVar1 = &local_1b8;
  for (iVar2 = 0x6b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  this_00 = (int *)(iVar4 + 0x11c0);
  *(undefined2 *)puVar1 = *(undefined2 *)param_1;
  *(undefined1 *)((int)puVar1 + 2) = *(undefined1 *)((int)param_1 + 2);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_1002abe0(this_00,0x1b4);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x1b4;
      puVar1[2] = local_8;
      puVar5 = &local_1b8;
      puVar6 = puVar1 + 3;
      for (iVar2 = 0x6b; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x1beU & 0xfffffffc);
      *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
      *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
      *puVar3 = 0;
      *puVar1 = FUN_100189a7;
      this_00[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1001899a;
    }
    FUN_10014f4d(this_00);
  }
  puVar1 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar1 = local_8;
  puVar6 = &local_1b8;
  puVar5 = puVar1;
  for (iVar4 = 0x6b; puVar3 = puVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar3;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)puVar6;
  *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)((int)puVar6 + 2);
  FUN_100189a7(puVar1);
LAB_1001899a:
  *this_00 = 0;
  return;
}

