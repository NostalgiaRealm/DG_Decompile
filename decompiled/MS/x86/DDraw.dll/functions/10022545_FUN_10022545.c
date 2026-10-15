/*
 * FUN_10022545 at 10022545
 * undefined4 * __fastcall FUN_10022545(int * param_1)
 * Address ranges: 10022545-100225ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10022545(int *param_1)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_10060bca(0x60);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    this = puVar2 + 1;
    puVar2[2] = 0;
    *this = 0;
    FUN_10060d45(puVar2 + 3,0,0x38);
    puVar2[0x11] = param_1;
    *puVar2 = &PTR_FUN_100642dc;
    puVar1 = puVar2 + 0x12;
    puVar2[0x13] = 0;
    *puVar1 = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *(undefined1 *)(puVar2 + 0x17) = 0;
    FUN_10023421(this,&DAT_10062560,(int)puVar1);
    FUN_10023421(this,&DAT_10062420,(int)puVar1);
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  return puVar2;
}

