/*
 * FUN_1002675f at 1002675f
 * undefined4 __thiscall FUN_1002675f(void * this, uint * param_1, undefined4 * param_2)
 * Address ranges: 1002675f-100267f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002675f(void *this,uint *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_44 [2];
  undefined4 local_3c;
  uint local_24 [7];
  void *local_8;
  
  puVar1 = param_1;
  uVar2 = 0x80070057;
  if (param_1 != (uint *)0x0) {
    puVar6 = local_24;
    local_8 = this;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    param_1 = local_24;
    FUN_100267f8(&param_1,(&PTR_DAT_1006b5c4)[*(int *)((int)this + 0x40) * 0x6a]);
    FUN_100267f8(&param_1,(&PTR_DAT_1006b5c0)[*(int *)((int)this + 0x40) * 0x6a]);
    uVar5 = 0;
    uVar7 = 0;
    puVar3 = param_2;
    do {
      if (*(char *)((int)local_24 + uVar7) != '\0') {
        if (puVar3 != (undefined4 *)0x0) {
          if (*puVar1 <= uVar5) goto LAB_100267e7;
          FUN_10024c76(local_8,local_44,uVar7);
          *param_2 = local_3c;
          puVar3 = param_2 + 1;
          param_2 = puVar3;
        }
        uVar5 = uVar5 + 1;
      }
LAB_100267e7:
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x1c);
    *puVar1 = uVar5;
    uVar2 = 0;
  }
  return uVar2;
}

