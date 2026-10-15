/*
 * FUN_1800e313c at 1800e313c
 * int __fastcall FUN_1800e313c(longlong param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 1800e313c-1800e32f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800e313c(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  *param_3 = 0;
  iVar1 = 0;
  if ((((((*param_2 == 0) && (param_2[1] == 0x46000000000000c0)) ||
        ((*param_2 == 0x4e957966c4fec28f && (param_2[1] == -0x473ca934ce0b6b61)))) ||
       ((*param_2 == 0x4140a00c905db94b && (param_2[1] == 0x57a39eca642bf59d)))) ||
      ((*param_2 == 0x47cee7e47116d91c && (param_2[1] == -0x1ac80b977e133948)))) ||
     ((*param_2 == 0x4185ac1b5b160d0f && (param_2[1] == 0x55a4a542aeb3a88b)))) {
    *param_3 = param_1;
    (**(code **)(**(longlong **)(param_1 + 0x688) + 8))();
  }
  else if (((((*param_2 == 0x45571fe7553103fb) &&
             ((param_2[1] == -0x5883f182926bc745 && (*(int *)(param_1 + 0xb60) != 0)))) ||
            ((*param_2 == 0x412cff1738c3e585 &&
             ((param_2[1] == 0x282ad7f9c64f5091 && (1 < *(uint *)(param_1 + 0xb60))))))) ||
           ((((*param_2 == 0x4e38b84c6fda83a7 &&
              ((param_2[1] == 0x3d6b0122bdc7c89a && (2 < *(uint *)(param_1 + 0xb60))))) ||
             ((*param_2 == 0x4541d3a98754318e &&
              ((param_2[1] == 0x7448dc505b64cf98 && (3 < *(uint *)(param_1 + 0xb60))))))) ||
            ((*param_2 == 0x474c402455050859 &&
             ((param_2[1] == -0x15bb11158d9b0a79 && (4 < *(uint *)(param_1 + 0xb60))))))))) ||
          ((*param_2 == 0x4cfae548c3827890 &&
           ((param_2[1] == -0x7ff0c85676a9306a && (5 < *(uint *)(param_1 + 0xb60))))))) {
    local_res18[0] = 0;
    iVar1 = (**(code **)**(undefined8 **)(param_1 + 0x688))
                      (*(undefined8 **)(param_1 + 0x688),param_2,local_res18);
    if (-1 < iVar1) {
      *param_3 = param_1;
    }
  }
  else {
    iVar1 = -0x7fffbffe;
  }
  return iVar1;
}

