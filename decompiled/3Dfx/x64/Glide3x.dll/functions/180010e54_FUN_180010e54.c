/*
 * FUN_180010e54 at 180010e54
 * undefined __fastcall FUN_180010e54(longlong param_1)
 * Address ranges: 180010e54-1800110ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010e54(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_438 [129];
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_res8[0] = 0;
    local_res10[0] = 0;
    local_res18[0] = 0;
    lVar4 = (**(code **)(param_1 + 0x88))(local_res8,local_res10,local_res18,local_res20);
    if (lVar4 != 0) {
      FUN_180007a08(param_1,local_438);
      FUN_180008464(param_1,3,8,1,1,0);
      FUN_180008364(param_1,3,8,1,1,0);
      FUN_1800081a8(param_1,1,5,4,0);
      FUN_180008110(param_1,0);
      FUN_180008264(param_1,7);
      FUN_180008670(param_1,0);
      FUN_180008544(param_1,1,0);
      piVar1 = (int *)(param_1 + 0x60);
      if (*(char *)(param_1 + 100) != '\0') {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x113) != '\x02') {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b0))();
          *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x113) = 2;
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      FUN_18000830c(param_1,0);
      FUN_1800082bc(param_1,1);
      if (*(char *)(param_1 + 100) != '\0') {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x13d) != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x100))();
          *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13d) = 0;
        }
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*(char *)(param_1 + 100) != '\0') {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          if (*(char *)((longlong)*(longlong **)(param_1 + 0x18) + 0x13e) != '@') {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))();
            *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x13e) = 0x40;
          }
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
      }
      FUN_1800085b8(param_1,0,0,*(int *)(*(longlong *)(param_1 + 0x18) + 0xa8),
                    *(int *)(*(longlong *)(param_1 + 0x18) + 0xac));
      lVar2 = *(longlong *)(param_1 + 0x18);
      uVar5 = *(int *)(lVar2 + 0xa8) - local_res8[0];
      uVar3 = *(int *)(lVar2 + 0xac) - local_res10[0];
      uVar6 = 0;
      if (0 < (int)uVar3) {
        uVar6 = uVar3;
      }
      uVar3 = 0;
      if (0 < (int)uVar5) {
        uVar3 = uVar5;
      }
      FUN_180007fa8(param_1,(uint)*(byte *)(lVar2 + 0xf0),uVar3,uVar6,local_res20[0],local_res8[0],
                    local_res10[0],local_res18[0],lVar4,1,1);
      FUN_180007b20(param_1,local_438,'\0');
    }
  }
  return;
}

