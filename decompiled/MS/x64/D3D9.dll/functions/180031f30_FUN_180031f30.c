/*
 * FUN_180031f30 at 180031f30
 * undefined1 __fastcall FUN_180031f30(longlong * param_1, char param_2)
 * Address ranges: 180031f30-180032020
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180031f30(longlong *param_1,char param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_18;
  uint local_10;
  int local_c;
  
  uVar2 = 0;
  if (*(short *)((longlong)param_1 + 0x14) == 1) {
    if (param_2 == '\0') {
      local_10 = (uint)*(ushort *)(param_1 + 2);
      local_18 = 0;
      if ((int)param_1[4] != 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x24);
        local_10 = ((*(ushort *)(param_1 + 2) - 1) + (uint)bVar1 & -(uint)bVar1) / (uint)bVar1;
      }
      local_c = *(ushort *)((longlong)param_1 + 0x16) - 1;
      uVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_18);
    }
    else {
      local_res18 = 0;
      local_res8[0] = 0;
      cVar3 = (**(code **)(*param_1 + 0x50))(param_1,&local_res18,local_res8);
      if (cVar3 != '\0') {
        (**(code **)(*param_1 + 0x20))
                  (param_1,local_res18,param_1[5],(short)param_1[2],
                   *(undefined2 *)((longlong)param_1 + 0x12),local_res8[0],(int)param_1[3]);
        (**(code **)(*param_1 + 0x58))(param_1);
        uVar2 = 1;
      }
    }
  }
  else if (param_2 == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x40))();
  }
  return uVar2;
}

