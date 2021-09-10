main :: IO()
main = do
    a <- getLine
    b <- getLine
    let x = sum (map read (words a))
    let y = sum (map read (words b))
    printMax x y

printMax :: (Ord a) => a -> a -> IO()
printMax x y
    | x > y     = putStrLn "Gunnar"
    | x < y     = putStrLn "Emma"
    | otherwise = putStrLn "Tie"
