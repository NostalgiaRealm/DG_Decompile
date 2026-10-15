/*
 * FUN_100514e3 at 100514e3
 * undefined __thiscall FUN_100514e3(void * this, int param_1)
 * Address ranges: 100514e3-100515ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100514e3(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca8 + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10051e6a(puVar1);
    FUN_10060be1(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca4 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004b6f5(puVar1);
    FUN_10060be1(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1ca0 + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca4 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004b6f5(puVar1);
    FUN_10060be1(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c9c + (int)this);
  *(undefined4 *)(iVar2 + 0x1ca0 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004b6f5(puVar1);
    FUN_10060be1(puVar1);
  }
  puVar1 = *(undefined4 **)(iVar2 + 0x1c98 + (int)this);
  *(undefined4 *)(iVar2 + 0x1c9c + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004b6f5(puVar1);
    FUN_10060be1(puVar1);
  }
  *(undefined4 *)(iVar2 + 0x1c98 + (int)this) = 0;
  FUN_1005b3af(this,param_1);
  FUN_1004c1cc(this,param_1);
  return;
}

