/*
 * FUN_100515cf at 100515cf
 * undefined __thiscall FUN_100515cf(void * this, int param_1)
 * Address ranges: 100515cf-10051691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100515cf(void *this,int param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x16c0;
  puVar1 = *(undefined4 **)(iVar3 + 0x19cc + (int)this);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100514c8(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c8 + (int)this);
  *(undefined4 *)(iVar3 + 0x19cc + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1004dab2((int)pvVar2);
    FUN_10060be1(pvVar2);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0x19c4 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c8 + (int)this) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100514c8(puVar1);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x19c0 + (int)this);
  *(undefined4 *)(iVar3 + 0x19c4 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1004dab2((int)pvVar2);
    FUN_10060be1(pvVar2);
  }
  pvVar2 = *(LPVOID *)(iVar3 + 0x1cac + (int)this);
  *(undefined4 *)(iVar3 + 0x19c0 + (int)this) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_1005bc35((int)pvVar2);
    FUN_10060be1(pvVar2);
    *(undefined4 *)(iVar3 + 0x1cac + (int)this) = 0;
  }
  return;
}

