/*
 * FUN_180108628 at 180108628
 * undefined FUN_180108628(void)
 * Address ranges: 180108628-18010876f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180108628(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *extraout_x11;
  uint uVar5;
  undefined8 local_30 [2];
  
  FUN_1802229d8(*(undefined8 *)(param_1 + 0xe30));
  *(undefined8 *)(param_1 + 0xe30) = 0;
  *(undefined8 *)(param_1 + 0xe38) = 0;
  uVar5 = 0;
  while( true ) {
    if (param_2 <= uVar5) {
      uVar4 = FUN_180108ae8(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0xe30),0,1);
      if (-1 < (int)uVar4) {
        *(undefined8 *)(param_1 + 0xea0) =
             (&DAT_18024e850)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b];
        lVar2 = DAT_18024d928;
        iVar1 = *(int *)(DAT_18024d928 + 0x370);
        *(int *)(DAT_18024d928 + 0x370) = iVar1 + 1;
        if (iVar1 == 0) {
          *(undefined1 *)(lVar2 + 0x7e8) = 0;
          DAT_180258b80 = thunk_FUN_1802239c8(0,0,0,0);
          if (DAT_180258b80 != 0) {
            thunk_FUN_18022384c(lVar2 + 0x388);
            uVar4 = thunk_FUN_18022389c(0,0,FUN_1802203b8,lVar2,0,lVar2 + 0x374);
            *(undefined8 *)(lVar2 + 0x378) = uVar4;
            thunk_FUN_1802238ec(DAT_180258b80,0xffffffff);
          }
        }
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
        uVar4 = 0;
      }
      return uVar4;
    }
    local_30[0] = 0;
    uVar3 = FUN_18010be98(param_1 + 0xe30,local_30);
    if ((uVar3 & 1) == 0) break;
    uVar5 = uVar5 + 1;
  }
  return 0x80004005;
}

