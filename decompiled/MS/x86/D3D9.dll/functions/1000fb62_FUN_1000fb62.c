/*
 * FUN_1000fb62 at 1000fb62
 * undefined4 * __fastcall FUN_1000fb62(int param_1)
 * Address ranges: 1000fb62-1000fbc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1000fb62(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  SIZE_T dwSize;
  undefined4 *local_10;
  int local_c;
  
  FUN_100017a7(&local_10,0x100);
  uVar1 = FUN_1000f7f5(param_1,(int *)&local_10);
  puVar3 = (undefined4 *)0x0;
  if ((char)uVar1 != '\0') {
    dwSize = local_c - (int)local_10;
    puVar2 = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,0x40);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100cff00(puVar2,local_10,dwSize);
      puVar3 = puVar2;
    }
  }
  thunk_FUN_100cfd6c(local_10);
  return puVar3;
}

