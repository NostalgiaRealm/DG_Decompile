/*
 * FUN_100402a0 at 100402a0
 * undefined FUN_100402a0(void)
 * Address ranges: 100402a0-1004048f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100402a0(int *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_100349f0(param_1,param_2,param_3);
  if ((uVar5 & 1) != 0) {
    param_1[0x3c] = -1;
    param_1[0x3a] = -1;
    param_1[0x3b] = -1;
    param_1[0x44] = -1;
    param_1[0x42] = -1;
    param_1[0x43] = -1;
    iVar4 = param_1[2];
    piVar1 = param_1 + 0x34;
    piVar2 = param_1 + 0x30;
    piVar1[0] = -1;
    piVar1[1] = -1;
    piVar2[0] = -1;
    piVar2[1] = -1;
    if (iVar4 != 9) {
      piVar3 = param_1 + 0x2e;
      uVar5 = FUN_1003f958(param_1,*param_2,param_2[1],param_2[2],piVar3,param_1 + 0x2f,piVar2,
                           param_1 + 0x31);
      if ((uVar5 & 1) != 0) {
        uVar5 = FUN_1003f410(param_1,param_1 + 0x37,param_2[3],param_2[4],0x35,0x39,param_2[5] << 1)
        ;
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_1003f410(param_1,param_1 + 0x3f,param_2[3],param_2[4],0x27,0x2a,
                               param_2[5] << 2);
          if ((uVar5 & 1) != 0) {
            if ((param_3 == '\0') ||
               (uVar5 = FUN_1003fe98(param_1,*param_2,param_2[1],param_2[2],
                                     *(undefined1 *)(param_2 + 10),param_1 + 0x33,piVar1,
                                     param_1 + 0x35), (uVar5 & 1) != 0)) {
              if (*piVar3 != 0) {
                *piVar3 = *(int *)(param_1[0x29] + *param_1 * 0x28 + 0x30) + *piVar3;
              }
              return 1;
            }
            FUN_1003f818(param_1,param_1 + 0x3f);
          }
          FUN_1003f818(param_1,param_1 + 0x37);
        }
        FUN_1003fd00(param_1);
      }
    }
    FUN_10034bc0(param_1,param_1[0x15]);
  }
  return 0;
}

