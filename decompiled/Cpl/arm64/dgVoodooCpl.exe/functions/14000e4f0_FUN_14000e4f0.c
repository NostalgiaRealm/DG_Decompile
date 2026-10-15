/*
 * FUN_14000e4f0 at 14000e4f0
 * undefined8 __cdecl FUN_14000e4f0(longlong param_1, int param_2, undefined8 param_3, LPARAM param_4, undefined1 * param_5, int * param_6, longlong param_7, undefined4 * param_8)
 * Address ranges: 14000e4f0-14000e6e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000e4f0(longlong param_1,int param_2,undefined8 param_3,LPARAM param_4,undefined1 *param_5,
             int *param_6,longlong param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined **local_720 [2];
  undefined1 local_710;
  undefined **local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  char *local_6f0;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined1 local_6b8;
  undefined4 local_6b4;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  int aiStack_660 [8];
  undefined1 local_640;
  undefined8 auStack_450 [66];
  undefined8 auStack_240 [66];
  
  if (param_2 == 0x408) {
    *param_5 = 1;
    if (*(HWND *)(param_1 + 0x1b48) == (HWND)0x0) {
      uVar5 = 0;
    }
    else {
      param_4 = *(LPARAM *)(param_1 + 0x18);
      uVar5 = SendMessageW(*(HWND *)(param_1 + 0x1b48),0x405,0,param_4);
      uVar5 = uVar5 & 0xffffffff;
    }
    if (uVar5 != 0) {
      FUN_1400090b0((undefined8 *)aiStack_660);
      puVar1 = (undefined4 *)0x0;
      if (param_1 != 0) {
        puVar1 = (undefined4 *)(param_1 + 0x88);
      }
      FUN_1400090b0(auStack_240);
      local_720[0] = &PTR_FUN_140028808;
      local_710 = 0;
      uVar5 = FUN_14001cc98(aiStack_660,(longlong *)local_720);
      uVar7 = (uint)(byte)uVar5;
      if ((uVar5 & 0xff) == 0) {
        local_708 = &PTR_FUN_140029220;
        local_700 = 0;
        local_6f8 = 0;
        local_6f0 = (char *)0x0;
        local_6e8 = 0;
        local_6e0 = 0;
        uStack_6d8 = 0;
        local_6d0 = 0;
        uStack_6c8 = 0;
        local_6c0 = 0;
        local_6b8 = 1;
        local_6b4 = 0;
        local_6b0 = 0;
        uStack_6a8 = 0;
        local_6a0 = 0;
        local_698 = 0;
        uStack_690 = 0;
        local_688 = 0;
        local_680 = 0;
        local_678 = 0;
        uStack_670 = 0;
        local_668 = 0;
        if (puVar1 != (undefined4 *)0x0) {
          bVar3 = param_1 != 0;
          puVar2 = (undefined4 *)&DAT_00000004;
          if (bVar3) {
            puVar2 = (undefined4 *)(param_1 + 0x8c);
          }
          local_700 = CONCAT44(*puVar2,*puVar1);
          puVar2 = (undefined4 *)&DAT_00000008;
          if (bVar3) {
            puVar2 = (undefined4 *)(param_1 + 0x90);
          }
          local_6f8 = *puVar2;
          local_6f0 = "[dgVoodoo IniParser] ";
          puVar2 = (undefined4 *)&DAT_00000018;
          if (bVar3) {
            puVar2 = (undefined4 *)(param_1 + 0xa0);
          }
          local_6e8 = *puVar2;
        }
        uVar4 = FUN_140015c30((longlong)&local_708,local_720,1);
        uVar7 = (uint)(byte)uVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = FUN_14001a998((undefined4 *)auStack_240,(longlong *)&local_708,puVar1,param_4,
                                param_5,param_6,param_7,param_8);
          uVar7 = uVar4 & 0xff;
          if ((uVar4 & 0xff) == 0) {
            FUN_140025250((undefined1 *)auStack_450,0,0x20c);
            puVar6 = (undefined8 *)FUN_1400090b0(auStack_450);
          }
          else {
            thunk_FUN_140001000(auStack_450,auStack_240,0x20c);
            puVar6 = auStack_450;
          }
          thunk_FUN_140001000((undefined8 *)aiStack_660,puVar6,0x20c);
        }
        FUN_140015b60(&local_708);
      }
      FUN_14000f2c0(local_720);
      if (uVar7 != 0) {
        *(undefined1 *)(param_1 + 0x1dc5) = 1;
        *(undefined1 *)(param_1 + 0x1b80) = local_640;
        (*(code *)**(undefined8 **)(param_1 + 0x80))(param_1 + 0x80);
      }
    }
  }
  return 0;
}

