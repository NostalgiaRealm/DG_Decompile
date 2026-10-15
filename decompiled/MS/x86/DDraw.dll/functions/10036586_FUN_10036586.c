/*
 * FUN_10036586 at 10036586
 * undefined1 __fastcall FUN_10036586(HWND param_1, int param_2, uint param_3, int * param_4)
 * Address ranges: 10036586-10036603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10036586(HWND param_1,int param_2,uint param_3,int *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  HWND pHVar3;
  undefined4 uVar4;
  HWND this;
  undefined1 uVar5;
  HWND local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_10023df9((int)&uStack_8 + 3);
  uVar1 = param_3;
  puVar2 = (undefined4 *)FUN_10036652(&param_3);
  if (puVar2 == (undefined4 *)0x0) {
    pHVar3 = (HWND)FUN_10060bca(0x14);
    this = (HWND)0x0;
    if (pHVar3 != (HWND)0x0) {
      pHVar3->unused = uVar1;
      pHVar3[1].unused = 0;
      pHVar3[2].unused = 0;
      pHVar3[3].unused = 0;
      *(undefined2 *)&pHVar3[4].unused = 0;
      local_c = pHVar3;
      FUN_100366ff(&param_3,&local_c);
      this = local_c;
    }
  }
  else {
    this = (HWND)*puVar2;
  }
  if (this == (HWND)0x0) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_10036321(this,param_1,param_2,param_4);
    uVar5 = (undefined1)uVar4;
  }
  FUN_10023e27();
  return uVar5;
}

