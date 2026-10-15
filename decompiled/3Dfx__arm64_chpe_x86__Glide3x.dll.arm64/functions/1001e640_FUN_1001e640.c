/*
 * FUN_1001e640 at 1001e640
 * undefined FUN_1001e640(void)
 * Address ranges: 1001e640-1001e77b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1001e640(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            int param_7,int param_8)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  
  uStack_4c = 0;
  local_54 = 0;
  uVar5 = 0;
  uVar2 = FUN_1001dfc0(param_1,0,param_2,0,0,0,auStack_58,1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_1001af58(uStack_4c & 0xffffffff,param_2 == 7 || param_2 == 2);
    uVar3 = (uint)(uVar2 >> 3) & 0x1fffffff;
    if ((uVar2 >> 3 & 0x1fffffff) != 0) {
      if (uStack_4c._4_4_ == 0) {
        iVar1 = local_54._4_4_;
        uVar4 = 0;
        iVar6 = (int)local_54 + local_54._4_4_ * param_4 + uVar3 * param_3;
        if (param_6 != 0) {
          do {
            FUN_1007e4a0(param_8,iVar6,param_5 * uVar3);
            uVar4 = uVar4 + 1;
            iVar6 = iVar6 + iVar1;
            param_8 = param_8 + param_7;
          } while (uVar4 < param_6);
        }
      }
      uVar5 = 1;
    }
    FUN_1001e2b0(param_1,0,param_2,0,0,0,0,0,0);
  }
  return uVar5;
}

