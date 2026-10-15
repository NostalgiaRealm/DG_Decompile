/*
 * FUN_10027de8 at 10027de8
 * undefined __thiscall FUN_10027de8(void * this, uint param_1, uint param_2)
 * Address ranges: 10027de8-10027e5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10027de8(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_18;
  uint local_14;
  undefined8 local_10;
  
  local_18 = param_1;
  local_14 = param_2;
  local_10 = 0;
  uVar1 = FUN_10028044(this,&local_18);
  if (uVar1 != *(uint *)((int)this + 8)) {
    uVar2 = FUN_1001990a((void *)(*(int *)((int)this + 4) + uVar1 * 0x40),local_18,local_14,
                         (uint)local_10,local_10._4_4_);
    if ((char)uVar2 != '\0') {
      puVar4 = (undefined4 *)&stack0x00000014;
      puVar5 = (undefined4 *)(extraout_ECX + 0x10);
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      return;
    }
  }
  FUN_10027f72(this,uVar1,&local_18,(undefined4 *)&stack0x00000014);
  return;
}

