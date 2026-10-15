/*
 * FUN_180024508 at 180024508
 * undefined1 __fastcall FUN_180024508(longlong * param_1, int param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180024508-1800245c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180024508(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0x17) {
    if (param_2 == 0x1d) {
      (**(code **)(*param_1 + 0x200))();
      return 0;
    }
    if ((param_2 != 0x1e) && (param_2 != 0x21)) {
      if (param_2 != 0x29) {
        return 0;
      }
      FUN_1800276a4((longlong)(param_1 + 0x84c),0,0,param_4);
      FUN_180009de8((longlong)(param_1 + 0x84c));
      *(undefined1 *)(param_1 + 0x65e) = 1;
      return 1;
    }
  }
  FUN_18000f41c((longlong)param_1,'\x01');
  if (param_2 == 0x17) {
    *(undefined4 *)((longlong)param_1 + 0x2c44) = *(undefined4 *)((longlong)param_1 + 0x2c14);
  }
  else if (param_2 == 0x1e) {
    *(int *)(param_1 + 0x588) = (int)param_1[0x582];
  }
  else if (param_2 == 0x21) {
    *(int *)(param_1 + 0x589) = (int)param_1[0x583];
  }
  FUN_18000f3a4((longlong)param_1);
  return 0;
}

