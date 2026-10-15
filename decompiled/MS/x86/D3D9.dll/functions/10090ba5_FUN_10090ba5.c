/*
 * FUN_10090ba5 at 10090ba5
 * undefined4 __stdcall FUN_10090ba5(int param_1, uint param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10090ba5-10090c15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090ba5(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int extraout_ECX;
  void *this;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar3 = FUN_100026b9(param_3);
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_100026d2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar3 != '\0') {
        uVar4 = 0x8876086a;
        cVar1 = FUN_1000347d(this,param_4);
        if (cVar1 != '\0') {
          cVar1 = FUN_1000347d((void *)(param_1 + -0x70),param_5);
          if (cVar1 != '\0') {
            if (param_6 == 0) {
              bVar2 = FUN_10002956(param_4,param_5);
              if (bVar2) {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = 0;
            }
          }
        }
      }
    }
  }
  return uVar4;
}

