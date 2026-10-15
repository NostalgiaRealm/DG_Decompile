/*
 * FUN_100235a9 at 100235a9
 * undefined __thiscall FUN_100235a9(void * this, undefined4 * param_1)
 * Address ranges: 100235a9-100236c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100235a9(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_10060d45(param_1 + 1,0,0xa8);
  *param_1 = 0xac;
  param_1[1] = *(undefined4 *)this;
  param_1[2] = *(undefined4 *)((int)this + 4);
  param_1[3] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0xc);
  param_1[5] = *(undefined4 *)((int)this + 0x10);
  param_1[6] = *(undefined4 *)((int)this + 0x14);
  param_1[7] = *(undefined4 *)((int)this + 0x18);
  param_1[8] = *(undefined4 *)((int)this + 0x1c);
  param_1[9] = *(undefined4 *)((int)this + 0x20);
  param_1[10] = *(undefined4 *)((int)this + 0x24);
  param_1[0xb] = *(undefined4 *)((int)this + 0x28);
  param_1[0xc] = *(undefined4 *)((int)this + 0x2c);
  param_1[0xd] = *(undefined4 *)((int)this + 0x30);
  param_1[0xe] = *(undefined4 *)((int)this + 0x34);
  param_1[0xf] = *(undefined4 *)((int)this + 0x38);
  param_1[0x10] = *(undefined4 *)((int)this + 0x3c);
  param_1[0x11] = *(undefined4 *)((int)this + 0x40);
  param_1[0x12] = *(undefined4 *)((int)this + 0x44);
  param_1[0x13] = *(undefined4 *)((int)this + 0x48);
  param_1[0x14] = *(undefined4 *)((int)this + 0x4c);
  param_1[0x15] = *(undefined4 *)((int)this + 0x50);
  param_1[0x16] = *(undefined4 *)((int)this + 0x54);
  param_1[0x17] = *(undefined4 *)((int)this + 0x58);
  param_1[0x18] = *(undefined4 *)((int)this + 0x5c);
  puVar2 = (undefined4 *)((int)this + 0x60);
  puVar3 = param_1 + 0x19;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x21] = *(undefined4 *)((int)this + 0x158);
  param_1[0x22] = *(undefined4 *)((int)this + 0x80);
  param_1[0x23] = *(undefined4 *)((int)this + 0x84);
  param_1[0x24] = *(undefined4 *)((int)this + 0x88);
  param_1[0x25] = *(undefined4 *)((int)this + 0x8c);
  param_1[0x26] = *(undefined4 *)((int)this + 0x90);
  param_1[0x27] = *(undefined4 *)((int)this + 0x94);
  return;
}

