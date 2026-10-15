/*
 * FUN_1800d1610 at 1800d1610
 * undefined FUN_1800d1610(void)
 * Address ranges: 1800d1610-1800d17d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d1610(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  longlong extraout_x15;
  undefined1 auVar7 [16];
  
  auVar7 = FUN_180001640();
  lVar2 = extraout_x15 * -0x10;
  (*__imp_KERNEL32_dll_WideCharToMultiByte)
            (0,0x200,auVar7._8_8_,0xffffffff,&stack0x000004b0 + lVar2,0x1ffe,0,0);
  FUN_1800d14a0(&stack0x000002a0 + lVar2);
  *(undefined ***)(&stack0xffffffffffffffd0 + lVar2) = &PTR_FUN_18023c868;
  (&stack0xffffffffffffffe0)[lVar2] = 1;
  lVar4 = (*__imp_KERNEL32_dll_CreateFileW)(auVar7._8_8_,0x80000000,1,0,3,0x80,0);
  *(longlong *)(&stack0xffffffffffffffd8 + lVar2) = lVar4;
  if (lVar4 - 1U < 0xfffffffffffffffe) {
    cVar3 = FUN_1800d5090(auVar7._0_8_,&stack0xffffffffffffffd0 + lVar2,param_3);
    if (cVar3 == '\0') {
      *(undefined ***)(&stack0xffffffffffffffe8 + lVar2) = &PTR_FUN_18023af30;
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar2) = 0;
      *(undefined4 *)(&stack0xfffffffffffffff8 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000000 + lVar2) = 0;
      *(undefined4 *)(&stack0x00000008 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000010 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000018 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000020 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000028 + lVar2) = 0;
      *(undefined8 *)(&stack0x00000030 + lVar2) = 0;
      (&stack0x00000038)[lVar2] = 1;
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
        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar2) = param_3[2];
        *(char **)(&stack0x00000000 + lVar2) = s__dgVoodoo_IniParser__18023a050;
        *(undefined4 *)(&stack0x00000008 + lVar2) = param_3[6];
      }
      uVar5 = FUN_1800d74a0(&stack0xffffffffffffffe8 + lVar2,&stack0xffffffffffffffd0 + lVar2,1);
      if ((uVar5 & 1) != 0) {
        cVar3 = FUN_1800d4998(&stack0x000002a0 + lVar2,&stack0xffffffffffffffe8 + lVar2,param_3);
        if (cVar3 == '\0') {
          func_0x000180222c50(&stack0x00000090 + lVar2,0,0x20c);
          puVar6 = (undefined1 *)FUN_1800d14a0(&stack0x00000090 + lVar2);
        }
        else {
          thunk_FUN_180001218(&stack0x00000090 + lVar2,&stack0x000002a0 + lVar2,0x20c);
          puVar6 = &stack0x00000090 + lVar2;
        }
        thunk_FUN_180001218(auVar7._0_8_,puVar6,0x20c);
      }
      FUN_1800d73d0(&stack0xffffffffffffffe8 + lVar2);
    }
  }
  else {
    cVar3 = '\0';
  }
  FUN_180101f20(&stack0xffffffffffffffd0 + lVar2);
  return cVar3;
}

