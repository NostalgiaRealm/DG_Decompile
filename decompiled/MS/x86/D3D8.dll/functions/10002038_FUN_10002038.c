/*
 * FUN_10002038 at 10002038
 * undefined4 __thiscall FUN_10002038(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10002038-1000209c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10002038(void *this,int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086a;
  pbVar1 = (&PTR_DAT_100b73b0)[*(int *)((int)this + 8) * 0x4d];
  uVar3 = FUN_10002220(param_1);
  uVar3 = FUN_10002709(pbVar1,uVar3);
  if ((char)uVar3 != '\0') {
    uVar3 = FUN_10002220(param_2);
    uVar3 = FUN_10002709(pbVar1,uVar3);
    if ((char)uVar3 != '\0') {
      if (param_3 == 0) {
        bVar2 = FUN_100027e4(param_1,param_2);
        if (bVar2) {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

