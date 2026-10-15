/*
 * FUN_180009388 at 180009388
 * undefined __fastcall FUN_180009388(longlong param_1, longlong param_2, uint param_3, undefined4 param_4, char param_5)
 * Address ranges: 180009388-18000941d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009388(longlong param_1,longlong param_2,uint param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  FUN_180009180(param_2,*(longlong *)(param_1 + 0x228) + 0x3270,param_3,param_4,param_5);
  if (param_5 != '\0') {
    uVar1 = 5;
    if (param_3 == 5) {
      iVar2 = 0;
      FUN_180009180(param_2,*(longlong *)(param_1 + 0x228) + 0x3270,3,0,'\0');
      uVar1 = iVar2 + 4;
      cVar3 = (char)iVar2;
    }
    else {
      if (1 < param_3 - 3) {
        return;
      }
      cVar3 = '\0';
      iVar2 = 0;
    }
    FUN_180009180(param_2,*(longlong *)(param_1 + 0x228) + 0x3270,uVar1,iVar2,cVar3);
  }
  return;
}

