/*
 * FUN_10035e9a at 10035e9a
 * undefined __thiscall FUN_10035e9a(void * this, int param_1, char param_2)
 * Address ranges: 10035e9a-10035ef8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10035e9a(void *this,int param_1,char param_2)

{
  undefined4 uVar1;
  
  FUN_10032e50(this,0,0,0);
  if (*(int *)((int)this + 0xfa20) == *(int *)((int)this + 0xfa18)) {
    *(undefined4 *)((int)this + 0xfa18) = 0;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)((int)this + 0xfa20) = uVar1;
  uVar1 = 0x39;
  if (param_2 != '\0') {
    uVar1 = 0x2a;
  }
  *(int *)((int)this + 0xfa28) = param_1;
  *(undefined4 *)((int)this + 0xfa24) = uVar1;
  *(undefined1 *)((int)this + 0xf670) = 1;
  return;
}

