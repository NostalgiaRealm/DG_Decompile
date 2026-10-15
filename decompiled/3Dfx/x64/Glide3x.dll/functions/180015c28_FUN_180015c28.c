/*
 * FUN_180015c28 at 180015c28
 * undefined1 __fastcall FUN_180015c28(longlong * param_1, uint param_2, int param_3, undefined1 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, undefined1 param_9)
 * Address ranges: 180015c28-180015d78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180015c28(longlong *param_1,uint param_2,int param_3,undefined1 param_4,LONG param_5,
             LONG param_6,LONG param_7,LONG param_8,undefined1 param_9)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else if (param_3 == 1) {
    uVar3 = 1;
  }
  else if (param_3 == 2) {
    uVar3 = 2;
  }
  else {
    if (param_3 == 6) {
      uVar3 = *(uint *)(param_1[0x660] + 0x130);
      *(undefined4 *)(param_1[0x660] + 0x130) = 0xffffffff;
    }
    else {
      if (param_3 != 7) {
        return 0;
      }
      uVar3 = *(uint *)(param_1[0x660] + 0x134);
      *(undefined4 *)(param_1[0x660] + 0x134) = 0xffffffff;
    }
    if (uVar3 == 0xffffffff) {
      return 0;
    }
  }
  (**(code **)(*param_1 + 0x2f8))();
  uVar1 = FUN_180014e3c((longlong)param_1,param_2 & 1,uVar3,param_4,param_5,param_6,param_7,param_8,
                        param_9);
  if ((char)uVar1 != '\0') {
    if (2 < (int)uVar3) {
      FUN_180014940((longlong *)param_1[0x660],uVar3,*(uint *)((longlong)param_1 + 0x2a3c),
                    *(uint *)(param_1 + 0x548),*(int *)((longlong)param_1 + 0x2a44),'\x01');
      FUN_180014940((longlong *)param_1[0x660],uVar3,*(uint *)(param_1 + 0x54a),
                    *(uint *)((longlong)param_1 + 0x2a54),(int)param_1[0x54b],'\x01');
    }
    uVar2 = 1;
  }
  (**(code **)(*param_1 + 0x300))(param_1);
  return uVar2;
}

