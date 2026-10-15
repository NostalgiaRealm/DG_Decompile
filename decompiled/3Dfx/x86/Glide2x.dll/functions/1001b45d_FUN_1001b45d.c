/*
 * FUN_1001b45d at 1001b45d
 * undefined __thiscall FUN_1001b45d(void * this, uint * param_1)
 * Address ranges: 1001b45d-1001b4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001b45d(void *this,uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_8;
  
  local_8 = 0;
  do {
    uVar4 = (*(int *)((int)this + 0x38) + 1 + local_8) % 7;
    uVar1 = *(uint *)((int)this + uVar4 * 0x10 + 0x40);
    iVar3 = *(int *)((int)this + uVar4 * 0x10 + 0x44);
    if (uVar1 != 0 || iVar3 != 0) {
      if (((iVar3 <= (int)param_1[1]) &&
          (((iVar3 < (int)param_1[1] || (uVar1 <= *param_1)) &&
           (*(int *)((int)this + 0xb4) <= iVar3)))) &&
         ((*(int *)((int)this + 0xb4) < iVar3 || (*(uint *)((int)this + 0xb0) < uVar1)))) {
        iVar3 = 6;
        do {
          puVar5 = (undefined4 *)((int)this + iVar3 * 0x10 + 0xa0);
          puVar6 = (undefined4 *)((int)this + iVar3 * 0x10 + 0xb0);
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        uVar2 = *(undefined4 *)((int)this + uVar4 * 0x10 + 0x40);
        *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + uVar4 * 0x10 + 0x44);
        *(undefined4 *)((int)this + 0xb0) = uVar2;
        *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + uVar4 * 0x10 + 0x48);
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 7);
  return;
}

