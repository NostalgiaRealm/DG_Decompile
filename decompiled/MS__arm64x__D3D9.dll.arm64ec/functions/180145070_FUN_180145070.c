/*
 * FUN_180145070 at 180145070
 * undefined FUN_180145070(void)
 * Address ranges: 180145070-180145143
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180145070(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *extraout_x11;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = param_1[2];
  lVar2 = param_1[3];
  FUN_180210140(param_1[1],*(undefined4 *)((longlong)param_1 + 0x3c),
                *(undefined8 *)((longlong)param_1 + 0x2c),*(undefined8 *)((longlong)param_1 + 0x34),
                *(undefined8 *)(*(longlong *)(lVar1 + 0xb10) + 0x18),*(undefined8 *)(lVar1 + 0xb78))
  ;
  FUN_180207cd0(lVar1,lVar4,0,1,0x400);
  FUN_180206f40(lVar1);
  FUN_180206ff8(lVar1);
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar3,lVar4,(int)lVar2,*(undefined8 *)((longlong)param_1 + 0x24));
  FUN_180206fa8(lVar1);
  FUN_180207cd0(lVar1,lVar4,0,1,0xac3);
  return;
}

