/*
 * FUN_1801ed228 at 1801ed228
 * undefined FUN_1801ed228(void)
 * Address ranges: 1801ed228-1801ed363;1801ed36c-1801ed3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801ed228(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong extraout_x15;
  undefined1 auVar7 [16];
  undefined4 auStack_8 [2];
  
  auVar7 = FUN_180104f10();
  lVar2 = extraout_x15 * -0x10;
  thunk_FUN_1802236d0(0,0x200,auVar7._8_8_,0xffffffff,&stack0x000004b0 + lVar2,0x1ffe,0,0);
  FUN_1801ed0b8(&stack0x000002a0 + lVar2);
  FUN_180222460(&stack0xffffffffffffffd0 + lVar2,auVar7._8_8_,0);
  cVar3 = FUN_1802225a0(&stack0xffffffffffffffd0 + lVar2);
  cVar4 = '\0';
  if (cVar3 != '\0') {
    cVar4 = FUN_1801ed448(auVar7._0_8_,&stack0xffffffffffffffd0 + lVar2,param_3);
    if (cVar4 == '\0') {
      *(undefined ***)(&stack0xffffffffffffffe8 + lVar2) = &PTR_FUN_180237d20;
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = 0;
      auStack_8[extraout_x15 * -4] = 0;
      (&stack0x00000038)[lVar2] = 1;
      *(undefined8 *)(&stack0x00000000 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000008 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000010 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000018 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000020 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000028 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000030 + lVar2) = 0;
      *(undefined4 *)(&stack0x0000003c + lVar2) = 0;
      *(undefined8 *)(&stack0x00000040 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000048 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000050 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000058 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000060 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000068 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000070 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000078 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000080 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000088 + lVar2) = 0;
      if (param_3 != (undefined4 *)0x0) {
        uVar1 = param_3[1];
        *(undefined4 *)(&stack0xfffffffffffffff0 + lVar2) = *param_3;
        *(undefined4 *)(&stack0xfffffffffffffff4 + lVar2) = uVar1;
        auStack_8[extraout_x15 * -4] = param_3[2];
        *(char **)(&stack0x00000000 + lVar2) = s__dgVoodoo_IniParser__180236e40;
        *(undefined4 *)(&stack0x00000008 + lVar2) = param_3[6];
      }
      uVar5 = FUN_1801f37e0(&stack0xffffffffffffffe8 + lVar2,&stack0xffffffffffffffd0 + lVar2,1);
      if ((uVar5 & 1) != 0) {
        cVar4 = FUN_1801f2e70(&stack0x000002a0 + lVar2,&stack0xffffffffffffffe8 + lVar2,param_3);
        if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(&stack0x00000090 + lVar2,&stack0x000002a0 + lVar2,0x20c);
        }
        FUN_180222c50(&stack0x00000090 + lVar2,0,0x20c);
        uVar6 = FUN_1801ed0b8(&stack0x00000090 + lVar2);
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(auVar7._0_8_,uVar6,0x20c);
      }
      FUN_1801f36f8(&stack0xffffffffffffffe8 + lVar2);
    }
  }
  FUN_1802224d0(&stack0xffffffffffffffd0 + lVar2);
  return cVar4;
}

