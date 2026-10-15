/*
 * FUN_180094400 at 180094400
 * undefined8 __fastcall FUN_180094400(longlong * param_1)
 * Address ranges: 180094400-1800944af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180094400(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  plVar1 = FUN_1800e202c(param_1[0x39e2] + 0x6d0,(ulonglong)*(uint *)(param_1 + 5),0x40000,0,'\x01')
  ;
  param_1[0x39e4] = (longlong)plVar1;
  uVar3 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1800a9d88(param_1);
    if ((char)uVar2 != '\0') {
      FUN_1800e2d18(*(longlong *)(param_1[0x39e3] + 0x1518),(ulonglong)param_1[0x39e4],0,1,0);
      uVar2 = FUN_1800e2ae8(*(longlong *)(param_1[0x39e3] + 0x1518) + 8,'\0');
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    uVar3 = FUN_1800fbcf0((LPVOID)param_1[0x39e4]);
    param_1[0x39e4] = 0;
  }
  return uVar3 & 0xffffffffffffff00;
}

