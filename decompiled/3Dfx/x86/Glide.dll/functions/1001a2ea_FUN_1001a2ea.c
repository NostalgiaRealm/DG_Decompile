/*
 * FUN_1001a2ea at 1001a2ea
 * undefined __thiscall FUN_1001a2ea(void * this, int param_1, int param_2, undefined4 * param_3, int param_4, int param_5)
 * Address ranges: 1001a2ea-1001a364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001a2ea(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    iVar2 = param_1 * 0x4e8 + 0x2a8;
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
      FUN_100500b0((undefined4 *)((int)this + (param_1 * 0x13a + param_4) * 4 + 0x388),
                   param_3 + param_4,(param_5 - param_4) * 4);
      return;
    }
    iVar2 = param_1 * 0x4e8 + 0x318;
  }
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(iVar2 + (int)this);
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

